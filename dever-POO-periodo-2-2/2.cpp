#include <iostream>

int main() {
    int num;
    std::cout << "Digite um numero: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Numero par\n";
    }
    else {
        std::cout << "Numero impar\n";
    }
    return 0;
}