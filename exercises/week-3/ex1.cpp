// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits>

template <typename T> T suma(T a, T b) {  return a + b; }
template <typename T> T resta(T a, T b) {  return a - b; }
template <typename T> T multiplicacion(T a, T b) {  return a * b; }
template <typename T> T division(T a, T b) {  return a / b; }

float getnumber(std::string label) {
    float n;
    std::cout << "Ingrese " << label << std::endl;
    do {
        std::cin >> n;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else break;
    } while(true);
    return n;
}

int main() {

    do {
        int option;
        float a;
        float b;
        std::cout << "=========================" << std::endl;
        std::cout << "Selecione una operación: " << std::endl;
        std::cout << "=========================" << std::endl;
        std::cout << "1. Suma" << std::endl;
        std::cout << "2. Resta" << std::endl;
        std::cout << "3. Multiplicación" << std::endl;
        std::cout << "4. Divición" << std::endl;
        std::cout << "5. Salir" << std::endl;
        do {
            std::cin >> option;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else break;
        } while(true);
        
        if (option == 5) break;
        
        switch (option) {
            case 1:
                a = getnumber("n1");
                b = getnumber("n2");
                std::cout << "La suma de n1 y n2 es: " << suma<float>(a, b)  << std::endl;
                break;
            case 2:
                a = getnumber("n1");
                b = getnumber("n2");
                std::cout << "La resta de n1 y n2 es: " << resta<float>(a, b)  << std::endl;
                break;
            case 3:
                a = getnumber("n1");
                b = getnumber("n2");
                std::cout << "La multiplicacion de n1 y n2 es: " << multiplicacion<float>(a, b)  << std::endl;
                break;
            case 4:
                a = getnumber("n1");
                b = getnumber("n2");
                std::cout << "La division de n1 y n2 es: " << division<float>(a, b)  << std::endl;
                break;
        };
        
        std::cout << "" << std::endl;
        
    } while (true);
    std::cout << "\n\nFin";
}