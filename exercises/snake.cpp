#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <sys/select.h>

using namespace std;

const int WIDTH = 25;
const int HEIGHT = 15;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };

class Snake {
private:
    int x, y;
    vector<pair<int, int>> tail;
    int fruitX, fruitY;
    Direction dir;
    int score;
    bool gameOver;
    
    struct termios oldt, newt;
    
    // Funzioni per input non bloccante
    void enableRawMode() {
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    }
    
    void disableRawMode() {
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    }
    
    bool kbhit() {
        struct timeval tv = { 0L, 0L };
        fd_set fds;
        FD_ZERO(&fds);
        FD_SET(STDIN_FILENO, &fds);
        return select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv) > 0;
    }
    
    char getch() {
        char c;
        if (read(STDIN_FILENO, &c, 1) < 0) {
            return '\0';
        }
        return c;
    }

public:
    Snake() {
        x = WIDTH / 2;
        y = HEIGHT / 2;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        dir = STOP;
        score = 0;
        gameOver = false;
        
        // Imposta il seed per numeri casuali
        srand(time(0));
    }

    void Setup() {
        enableRawMode();
        system("clear");
    }

    void Draw() {
        system("clear");
        
        cout << "=== SNAKE GAME ===" << endl;
        
        // Disegna bordo superiore
        cout << " ";
        for (int i = 0; i < WIDTH + 2; i++)
            cout << "─";
        cout << endl;

        // Disegna campo di gioco
        for (int i = 0; i < HEIGHT; i++) {
            cout << "│";
            for (int j = 0; j < WIDTH; j++) {
                // Testa del serpente
                if (i == y && j == x)
                    cout << "●";
                // Frutto
                else if (i == fruitY && j == fruitX)
                    cout << "🍎";
                // Coda
                else {
                    bool printTail = false;
                    for (int k = 0; k < tail.size(); k++) {
                        if (tail[k].first == j && tail[k].second == i) {
                            cout << "○";
                            printTail = true;
                            break;
                        }
                    }
                    if (!printTail)
                        cout << " ";
                }
            }
            cout << "│" << endl;
        }

        // Disegna bordo inferiore
        cout << " ";
        for (int i = 0; i < WIDTH + 2; i++)
            cout << "─";
        cout << endl;

        // Mostra informazioni
        cout << "Punteggio: " << score << " | Lunghezza: " << tail.size() + 1 << endl;
        cout << "Controlli: WASD per muoversi, Q per uscire" << endl;
        cout << "Frutti mangiati: " << score / 10 << endl;
    }

    void Input() {
        if (kbhit()) {
            char key = getch();
            switch (key) {
                case 'a':
                case 'A':
                    if (dir != RIGHT) dir = LEFT;
                    break;
                case 'd':
                case 'D':
                    if (dir != LEFT) dir = RIGHT;
                    break;
                case 'w':
                case 'W':
                    if (dir != DOWN) dir = UP;
                    break;
                case 's':
                case 'S':
                    if (dir != UP) dir = DOWN;
                    break;
                case 'q':
                case 'Q':
                    gameOver = true;
                    break;
                case ' ': // Spazio per pausa
                    cout << "\nPAUSA - Premi spazio per continuare...";
                    while (true) {
                        if (kbhit() && getch() == ' ') break;
                        usleep(100000);
                    }
                    break;
            }
        }
    }

    void Logic() {
        // Salva posizione precedente della testa
        int prevX = x;
        int prevY = y;

        // Muovi la coda (se esiste)
        if (!tail.empty()) {
            // Aggiungi la posizione corrente all'inizio della coda
            tail.insert(tail.begin(), make_pair(x, y));
            // Rimuovi l'ultimo elemento
            tail.pop_back();
        }

        // Muovi la testa in base alla direzione
        switch (dir) {
            case LEFT:  x--; break;
            case RIGHT: x++; break;
            case UP:    y--; break;
            case DOWN:  y++; break;
            case STOP: break; // Non muovere se fermo
        }

        // Controlla se il serpente mangia il frutto
        if (x == fruitX && y == fruitY) {
            score += 10;
            
            // Aggiungi nuovo segmento alla coda
            if (tail.empty()) {
                tail.push_back(make_pair(prevX, prevY));
            } else {
                // Aggiungi alla fine della coda
                tail.push_back(tail.back());
            }
            
            // Genera nuovo frutto in posizione casuale
            bool validPosition;
            do {
                fruitX = rand() % WIDTH;
                fruitY = rand() % HEIGHT;
                
                // Controlla che il frutto non sia sul serpente
                validPosition = true;
                if (fruitX == x && fruitY == y) validPosition = false;
                for (auto segment : tail) {
                    if (fruitX == segment.first && fruitY == segment.second) {
                        validPosition = false;
                        break;
                    }
                }
            } while (!validPosition);
        }

        // Controlla collisione con i bordi
        if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) {
            gameOver = true;
            return;
        }

        // Controlla collisione con la coda
        for (auto segment : tail) {
            if (x == segment.first && y == segment.second) {
                gameOver = true;
                return;
            }
        }
    }

    void Run() {
        Setup();
        
        cout << "Pronto per iniziare! Usa WASD per muoverti." << endl;
        cout << "Premi un tasto per iniziare...";
        getch();
        
        // Aspetta che l'utente scelga una direzione
        while (dir == STOP && !gameOver) {
            Draw();
            Input();
            usleep(100000); // 100ms
        }
        
        // Game loop principale
        while (!gameOver) {
            Draw();
            Input();
            Logic();
            usleep(150000); // 150ms per il game speed
        }
        
        // Schermata di game over
        system("clear");
        cout << "╔════════════════════════════╗" << endl;
        cout << "║         GAME OVER!         ║" << endl;
        cout << "╠════════════════════════════╣" << endl;
        cout << "║ Punteggio finale: " << score;
        for (int i = 0; i < 8 - to_string(score).length(); i++) cout << " ";
        cout << "║" << endl;
        cout << "║ Lunghezza finale: " << tail.size() + 1;
        for (int i = 0; i < 8 - to_string(tail.size() + 1).length(); i++) cout << " ";
        cout << "║" << endl;
        cout << "║ Frutti mangiati:  " << score / 10;
        for (int i = 0; i < 8 - to_string(score / 10).length(); i++) cout << " ";
        cout << "║" << endl;
        cout << "╚════════════════════════════╝" << endl;
        cout << "\nPremi un tasto per uscire...";
        getch();
        
        disableRawMode();
    }
};

int main() {
    Snake game;
    game.Run();
    return 0;
}
