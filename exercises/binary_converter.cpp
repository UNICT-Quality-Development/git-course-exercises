#include <iostream>
#include <vector>

int main() {
    int num;
    std::cout << "Insert first number: ";
    std::cin >> num;

    // Gestione del caso 0
    if (num == 0) {
        std::cout << "The binary number is: 0\n";
        return 0;
    }

    // Vector per memorizzare i bit
    std::vector<int> binary;

    // Conversione in binario
    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }

    // Stampa in ordine inverso
    std::cout << "The binary number is: ";
    for (int i = binary.size() - 1; i >= 0; --i) {
        std::cout << binary[i];
    }
    std::cout << std::endl;

    return 0;
}
