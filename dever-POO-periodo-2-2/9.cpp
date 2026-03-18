#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Digite os 3 lados: ";
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Triangulo valido\n";
    } else {
        std::cout << "Triangulo invalido\n";
    }
    return 0;
}

//O resultado só será verdadeiro se as duas forem verdadeiras ao mesmo tempo.