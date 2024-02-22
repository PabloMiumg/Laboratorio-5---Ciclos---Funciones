#include <iostream>

// Funci�n para sumar los d�gitos de un n�mero
int sumarDigitos(int numero) {
    // Inicializar la variable de suma
    int suma = 0;

    // Iterar mientras haya d�gitos en el n�mero
    while (numero != 0) {
        // Obtener el d�gito m�s a la derecha
        int digito = numero % 10;

        // Sumar el d�gito a la suma total
        suma += digito;

        // Eliminar el d�gito m�s a la derecha del n�mero
        numero /= 10;
    }

    return suma;
}

int main() {
    // Solicitar al usuario que ingrese un n�mero
    int numero;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    // Llamar a la funci�n para sumar los d�gitos y mostrar el resultado
    int resultado = sumarDigitos(numero);
    std::cout << "La suma de los digitos es: " << resultado << std::endl;

    return 0;
}
