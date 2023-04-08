#include <iostream>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = 0;

    std::cout << "Ingrese longitud: " << std::endl;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
        std::cout << arr[i] << " ";
    }

    int suma = 0;
    double promedio = 0;

    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        suma += arr[i];
    }
    
    promedio = suma / (double) n;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;
}