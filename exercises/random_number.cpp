#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	srand(time(NULL));
	cout<<"The number is: "<<rand()<<"\n";
}
