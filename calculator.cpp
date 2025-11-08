#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int difference(int a, int b){
    return a-b;
}

int moltiplication(int a, int b){
    return a*b;
}

int division(int a, int b){
    return a/b;
}

int main(){
    int x,y;
    int somma=0;
    int differenza=0;
    int moltiplicazione=0;
    int divisione=0;

    cout << "Inserisci il primo numero: "  ;
    cin >> x;

    cout << endl;

    cout << "Inserisci il recondo numero: " ;
    cin >> y;

    cout << endl;

    somma=sum(x,y);
    cout<<"La somma è:" << somma<< endl;

    differenza=difference(x,y);
    cout << "La differenza è: " << differenza << endl;

    moltiplicazione=moltiplication(x,y);
    cout << "Il prodotto è: " << moltiplicazione << endl;

    divisione= division(x,y);
    cout << "La divisione è: " << divisione << endl;

    return 0;
}
