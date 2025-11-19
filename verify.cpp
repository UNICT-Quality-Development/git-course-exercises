// Software that verifies if a number is present in a fixed dimension array of random values.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Function search-value
bool search_value(int x, int a[], int n){
    for(int i=0; i<n; i++){
        if(x == a[i]){
            return true;
        }
    }
    return false;
}

//Main
int main(){
    srand(time(NULL));
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i] = rand()%100+1; //da 1 a 100
    }

    int value;
    cout << "What integer do you want to verify?" << endl;
    cin >> value;
    if(search_value(value, arr, 10)){
        cout << "The integer " << value << " is present in the array." << endl;
    }
    else{
        cout << "The integer " << value << " is not present in the array." << endl;
    }

    return 0;
}