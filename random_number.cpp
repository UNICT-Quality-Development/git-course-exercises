//Program that generates a random number

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int generate(){
    return rand()%100+1;
}

int main(){
    srand(time(NULL));
    cout << "The random number generated (1-100) is: " << generate() << endl;
    return 0;
}