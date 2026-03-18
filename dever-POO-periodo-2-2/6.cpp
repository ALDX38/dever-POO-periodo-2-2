#include <iostream>

int main() {
    int n1, n2, n3, maior;
    std::cout << "Digite 3 numeros: ";
    std::cin >> n1 >> n2 >> n3;
    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    std::cout << "O maior eh: " << maior << "\n";
    return 0;
}