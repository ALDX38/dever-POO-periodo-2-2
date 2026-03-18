#include <iostream>

int main() {
    int dia;
    std::cout << "Digite um numero de 1 a 7:\n ";
    std::cin >> dia;
    
    switch(dia) {
        case 1: std::cout << "Domingo\n"; break;
        case 2: std::cout << "Segunda-feira\n"; break;
        case 3: std::cout << "Terca-feira\n"; break;
        case 4: std::cout << "Quarta-feira\n"; break;
        case 5: std::cout << "Quinta-feira\n"; break;
        case 6: std::cout << "Sexta-feira\n"; break;
        case 7: std::cout << "Sabado\n"; break;
        default: std::cout << "Erro: Dia invalido\n";
    }
    return 0;
}