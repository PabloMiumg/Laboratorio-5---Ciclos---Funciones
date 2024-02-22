#include <iostream>
using namespace std;

// Funci�n que calcula la suma de los n�meros pares hasta un n�mero dado
int suma_pares_o_impares(int numero) {
    int suma = 0; 
    for (int i = 1; i <= numero; ++i) {
        if (i % 2 == 0) {  
            suma += i;     
        }
    }
    return suma; // Devolver la suma de los n�meros pares
}

// Funci�n principal
int main() {
    int numero_ejemplo = 10; 
    
    // Imprimir el mensaje con la suma de los n�meros pares hasta numero_ejemplo
    cout << "La suma de los numeros pares hasta " << numero_ejemplo << " es: " << suma_pares_o_impares(numero_ejemplo) << std::endl;
    return 0; 
}

