#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class risikoPlayer {
    private:    
        int N,M,O;
        string name;
        

    public:
        risikoPlayer(string name): name(name) {
            // rolling dices
            int arrOfDices[3];
            
            //srand(time(NULL));
            for(int i=0; i<3; i++) {
                arrOfDices[i]=rand()%(6)+1;
            }

            //first highest dice
            int temp_max=arrOfDices[0];
            int max_index;
            for(int i=1; i<3; i++) {
                if(temp_max<arrOfDices[i]) {
                    temp_max=arrOfDices[i];
                    max_index = i;
                }
            }

            this->N=temp_max;

            //second highest dice
            int temp_second=0;
            int second_index;
            for(int i=0; i<3 && i!=max_index; i++) {
                if(arrOfDices[i]>temp_second) {
                    temp_second=arrOfDices[i];
                    second_index=i;
                }
            }
            
            this->M=temp_second;

            //third highest dice
            int index=0;
            while(index == max_index || index == second_index) 
                index++;
            
            this->O=arrOfDices[index];
        }

        void comparePlayer(risikoPlayer p1) {
            cout << "  R   B" << endl;
            
            //comparing first
            cout << "N " << this->N << " vs " << p1.N << "=> ";
            if(N>p1.N)
                cout <<  this->name << " win" << endl;
            else
                cout << p1.name << " win" << endl;


            //comparing second 
            cout << "M " << this->M << " vs " << p1.M << "=> ";
            if(M>p1.M)
                cout << this->name << " win" << endl;
            else
                cout << p1.name << " win" << endl;

            //comparing third
            cout << "M " << this->O << " vs " << p1.O << "=> ";
            if(O>p1.O)
                cout << this->name << " win" << endl;
            else
                cout << p1.name << " win" << endl;

        }

        friend ostream& operator<<(ostream& os, const risikoPlayer& p1) {
            os << p1.name << " dices:" << endl;
            
            os << p1.N << " (N)" << endl;
            os << p1.M << " (M)" << endl;
            os << p1.O << " (O)" << endl;

            return os;
        }
};