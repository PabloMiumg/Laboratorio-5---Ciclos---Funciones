#include <iostream>

// Función para intercambiar dos números
void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para ordenar tres números de menor a mayor
void ordenarNumeros(int& num1, int& num2, int& num3) {
    // Ordenar num1 y num2
    if (num1 > num2) {
        intercambiar(num1, num2);
    }

    // Ordenar num2 y num3
    if (num2 > num3) {
        intercambiar(num2, num3);
    }

    // Revisar nuevamente num1 y num2
    if (num1 > num2) {
        intercambiar(num1, num2);
    }
}

int main() {
    // Solicitar al usuario que ingrese tres números
    int numero1, numero2, numero3;
    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;

    std::cout << "Ingrese el tercer número: ";
    std::cin >> numero3;

    // Llamar a la función para ordenar los números
    ordenarNumeros(numero1, numero2, numero3);

    // Mostrar los números ordenados
    std::cout << "Numeros ordenados de menor a mayor: " << numero1 << ", " << numero2 << ", " << numero3 << std::endl;

    return 0;
}

