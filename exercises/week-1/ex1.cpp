#include <iostream>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = 0;

    std::cout << "Ingrese longitud: " << std::endl;
    std::cin >> n;

    // int arr[n];
    int suma = 0;
    double promedio = 0;

    for (int i = 0; i < n; i++)
    {
        // arr[i] = rand() % 100 + 1;
        suma += rand() % 100 + 1;
    }
    
    promedio = suma / (double) n;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;
}