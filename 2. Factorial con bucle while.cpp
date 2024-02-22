#include <iostream>
using namespace std;

// Funci�n que calcula el factorial de un n�mero entero
unsigned long long factorial(int numero) {
    unsigned long long resultado = 1; 
    int i = numero; 
    while (i > 1) {
        resultado *= i; 
        --i;
    }
    return resultado; 
}


// Funci�n principal
int main() {
    int numero_ejemplo = 5;
    
    // Imprimir el mensaje con el resultado del factorial
    cout << "El factorial de " << numero_ejemplo << " es: " << factorial(numero_ejemplo) << std::endl;
    return 0;
}

