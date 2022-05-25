
 // Write a program that given a number as input convert it in binary.

  #include <iostream>
using namespace std;


int main()
{
    int a[10], n, i=0;
    cout << "inserisci un numero da convertire ";
    cin >> n;


    while (n>0){
        a[i] = n % 2;
        n = n / 2;
        i++;

    }
    cout << "Il numero convertito = ";
    for (int j = i-1; j >= 0; j--)

        cout << a[j];

}

