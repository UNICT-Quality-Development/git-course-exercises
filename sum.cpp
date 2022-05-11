#include <iostream>
using namespace std;

int sum(int , int );

int main(){
    int x, y;
    cout << "inserisci il primo numero intero";
    cin >> x;
    cout << "inserisci il secondo numero intero";
    cin >> y;
    cout <<"la somma di due valori è: " << sum(x, y) <<endl;
}

int sum(int x, int y){
    return x+y;
} 