#include <iostream>
using namespace std;

template <typename T> 
T sum(T& , T& );

template <typename T>
T mult(T& , T& );

template <typename T>
T diff(T& , T&);

template <typename T>
T div(T& , T&);


template <typename T>
T input(){
    int v;
    cout << "introduct a value from keyboard: ";
    cin >> v;
    cout << endl;
    return v;
}


int main(){
    
    auto x = input<int>();
    auto y = input<int>();
    cout << "sum: " << sum<int>(x, y) <<"\t diff: " << diff<int>(x, y) <<"\t mult: " << mult<int>(x, y);
    cout << "\t div: " << div<int>(x, y) << endl;

    return 0;
}


template <typename T>
T sum(T& a, T& b){
    return a + b;
}

template <typename T>
T diff(T& a, T& b){
    return a - b;
}

template <typename T>
T mult(T& a, T& b){
    return a * b;
}

template <typename T>
T div(T& a, T& b){
    return a/b;
}