#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    srand(111222333);
    int x = rand()%(99-0 +1) + 0;
    cout << "The random number: "<< x << endl;

    return 0;
}