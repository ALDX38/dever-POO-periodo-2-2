#include <iostream>

int main() {
    float nota;
    std::cout << "Digite a nota: ";
    std::cin >> nota;
    if (nota >= 60) std::cout << "Aprovado";
    else if (nota < 40) std::cout << "Reprovado";
    return 0;
}