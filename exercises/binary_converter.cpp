#include <iostream>
#include <string>

using namespace std;

string convert(int n);

int main(){
	int n;
	cout<<"Insert number to convert:\n";
	cin>>n;
	if(n>=0){
		cout<<"In binary: "<<convert(n)<<"\n";
	}
	else{
		cout<<"Must be positive!\n";
	}
}


string convert(int n){
	string s="";
	do{
		int x=n%2;
		if(x==1){
			s="1"+s;
		}
		else{
			s="0"+s;
		}
		n=n>>1;
	} while(n>0);
	return s;
}
