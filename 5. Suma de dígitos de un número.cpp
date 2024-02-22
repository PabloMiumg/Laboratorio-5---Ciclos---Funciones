#include <iostream>

// Función para sumar los dígitos de un número
int sumarDigitos(int numero) {
    // Inicializar la variable de suma
    int suma = 0;

    // Iterar mientras haya dígitos en el número
    while (numero != 0) {
        // Obtener el dígito más a la derecha
        int digito = numero % 10;

        // Sumar el dígito a la suma total
        suma += digito;

        // Eliminar el dígito más a la derecha del número
        numero /= 10;
    }

    return suma;
}

int main() {
    // Solicitar al usuario que ingrese un número
    int numero;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    // Llamar a la función para sumar los dígitos y mostrar el resultado
    int resultado = sumarDigitos(numero);
    std::cout << "La suma de los digitos es: " << resultado << std::endl;

    return 0;
}
