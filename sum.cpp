#include <iostream>
using namespace std;

int sum(int , int );
int numberOfInput();

int main(){

    int x = numberOfInput();
    int y = numberOfInput();

    cout <<"la somma di due valori è: " << sum(x, y) <<endl;
    return 0;
}

int sum(int x, int y){
    return x+y;
}

int numberOfInput(){
    int num;
    cout << "inserisci un numero: ";
    cin >> num;
    cout << endl;
    cout <<"numero inserito: " << num << endl;
    return num;
}