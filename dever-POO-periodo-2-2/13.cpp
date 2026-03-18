#include <iostream>

int main() {
    int op;
    float n1, n2;
    std::cout << "Codigo da operacao (1-Soma, 2-Sub, 3-Mult, 4-Div): ";
    std::cin >> op;
    std::cout << "Digite dois numeros: ";
    std::cin >> n1 >> n2;
    
    switch(op) {
        case 1: std::cout << "Resultado: " << n1 + n2 ; break;
        case 2: std::cout << "Resultado: " << n1 - n2 ; break;
        case 3: std::cout << "Resultado: " << n1 * n2 ; break;
        case 4: 
            if(n2 != 0) std::cout << "Resultado: " << n1 / n2 << "\n";
            else std::cout << "Erro: Divisao por zero\n";
            break;
        default: std::cout << "Erro: Codigo invalido\n";
    }
    return 0;
}