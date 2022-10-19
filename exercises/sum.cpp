#include <iostream>
using namespace std;
int sum(int a,int b){return a+b;}
float sum(float a,float b){return a+b;}
int main(){
	int a,b;
	float a2,b2;
	string operazione;
	cout<<"Vuoi inserire un numero intero(scrivi 'int')"<<endl<<"Vuoi inserire un numero con la varigola(scrivi 'float')"<<endl;
	cin>>operazione;
	if(operazione=="int"){
		cout<<"Inserire il primo numero: ";
		cin>>a;
		cout<<"Inserire il secondo numero: ";
		cin>>b;
		cout<<"La somma di "<<a<<"+"<<b<<"="<<sum(a,b);
	}
	else if(operazione=="float"){
		cout<<"Inserire il primo numero: ";
		cin>>a2;
		cout<<"Inserire il secondo numero: ";
		cin>>b2;
		cout<<"La somma di "<<a2<<"+"<<b2<<"="<<sum(a2,b2);
	}
}
