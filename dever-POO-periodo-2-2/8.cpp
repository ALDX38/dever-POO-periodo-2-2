#include <iostream>

int main() {
    int ano1, ano2;
    std::cout << "Ano atual e ano de nascimento: ";
    std::cin >> ano2 >> ano1;
    if ((ano2 - ano1) >= 16) std::cout << "Ja pode votar\n";
    else std::cout << "Nao pode votar\n";
    return 0;
}