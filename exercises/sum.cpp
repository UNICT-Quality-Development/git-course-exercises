#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(){
    int x;
    int y;
    cout<<"Inserisci il primo numero:";
    cin>>x;
    cout<<endl;
    cout<<"Inserisci secondo numero:";
    cin>>y;
    cout<<endl;
    int out;
    out = sum(x,y);
    cout<<"Risultato: "<<out;
    return 0;
}