#include <iostream>

double sum(double a, double b) {
    return a + b;
}

int main() {
    double a, b;
    std::cout << "Insert the first number: ";
    std::cin >> a;
    std::cout << "Insert the second number: ";
    std::cin >> b;
    std::cout << "Sum: " << sum(a, b) << std::endl;
    return 0;
}