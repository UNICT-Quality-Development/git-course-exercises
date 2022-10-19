#include <iostream>
using namespace std;

template <typename T, typename X>

T somma(T a, X b) {
	return a + b;
}

int main() {
	int a, b;
	cout << "Inserire primo addendo: " << endl;
	cin >> a;
	cout << "Inserire secondo addendo: " << endl;
	cin >> b;
	cout << "La somma di " << a << " e " << b << " e' pari a: " << somma(a, b);
	return 0;
}

