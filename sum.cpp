#include <iostream>
using namespace std;

int sum(int x, int y){
    return x+y;
}

int main(){
    double x;
    double y;
    cout << "Enter first digit: " << endl;
    cin >> x;
    cout << "Enter second digit: " << endl;
    cin >> y;
    cout << "The sum: " << x << " + " << y << "is: " << sum(x, y) << endl;
    return 0;
}