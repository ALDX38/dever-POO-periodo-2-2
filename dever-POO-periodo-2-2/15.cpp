#include <iostream>

int main() {
    char op;
    std::cout << "Digite uma operacao (+, -, *, /): ";
    std::cin >> op;
    
    switch(op) {
        case '+': std::cout << "Operacao de Adicao\n"; break;
        case '-': std::cout << "Operacao de Subtracao\n"; break;
        case '*': std::cout << "Operacao de Multiplicacao\n"; break;
        case '/': std::cout << "Operacao de Divisao\n"; break;
        default: std::cout << "Caractere invalido\n";
    }
    return 0;
}