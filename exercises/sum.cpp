#include<iostream>
using namespace std ; 

int main(){

	bool esc = true ;
	double n , c , sum ;
	char f ;   
	do{
		cout<<"Inserisci primo numero :  " ; 
		cin>>n ;
		cout<<endl ; 
		cout<<"Inserisci secondo numero :  " ; 
		cin>>c ;
		cout<<endl ;
		sum = n + c ; 
		cout<<"La somma è : "<<sum <<endl; 
		cout<<"Vuoi uscire ? premi Y per uscire N per fare un'altra somma ";
		cin<<f; 
		if(f=='Y') esc = false ;
		else esc = true ;    
	}while(esc) ; 
}


