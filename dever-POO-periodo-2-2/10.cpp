#include <iostream>

int main() {
    int num;
    std::cout << "Digite um numero: ";
    std::cin >> num;
    if (num >= 0) {
        if (num == 0) std::cout << "Zero\n";
        else std::cout << "Positivo\n";
    } else {
        std::cout << "Negativo\n";
    }
    return 0;
}