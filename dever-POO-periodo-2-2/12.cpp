#include <iostream>

int main() {
    char letra;
    std::cout << "Digite uma letra: ";
    std::cin >> letra;
    letra = std::tolower(letra); 
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        std::cout << "é uma vogal " << letra << "\n";
    } else {
        std::cout << "Nao é vogal.\n";
    }
    return 0;
}