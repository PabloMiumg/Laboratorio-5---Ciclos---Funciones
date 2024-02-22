#include <iostream>

// Funci�n para intercambiar dos n�meros
void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Funci�n para ordenar tres n�meros de menor a mayor
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
    // Solicitar al usuario que ingrese tres n�meros
    int numero1, numero2, numero3;
    std::cout << "Ingrese el primer n�mero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo n�mero: ";
    std::cin >> numero2;

    std::cout << "Ingrese el tercer n�mero: ";
    std::cin >> numero3;

    // Llamar a la funci�n para ordenar los n�meros
    ordenarNumeros(numero1, numero2, numero3);

    // Mostrar los n�meros ordenados
    std::cout << "Numeros ordenados de menor a mayor: " << numero1 << ", " << numero2 << ", " << numero3 << std::endl;

    return 0;
}

