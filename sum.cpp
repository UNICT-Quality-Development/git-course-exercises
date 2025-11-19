#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(){

    int x;
    int y;
    int result=0;

    cout << "Inserisci il primo numero: "  ;
    cin >> x;

    cout << endl;

    cout << "Inserisci il recondo numero: " ;
    cin >> y;

    cout << endl;

    result=sum(x,y);
    cout << "Somma: " <<x << "+" <<y << "=" <<result<< endl;

    return 0;
}
