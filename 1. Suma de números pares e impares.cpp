#include <iostream>
using namespace std;

// Función que calcula la suma de los números pares hasta un número dado
int suma_pares_o_impares(int numero) {
    int suma = 0; 
    for (int i = 1; i <= numero; ++i) {
        if (i % 2 == 0) {  
            suma += i;     
        }
    }
    return suma; // Devolver la suma de los números pares
}

// Función principal
int main() {
    int numero_ejemplo = 10; 
    
    // Imprimir el mensaje con la suma de los números pares hasta numero_ejemplo
    cout << "La suma de los numeros pares hasta " << numero_ejemplo << " es: " << suma_pares_o_impares(numero_ejemplo) << std::endl;
    return 0; 
}

