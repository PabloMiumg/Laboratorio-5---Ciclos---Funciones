#include <iostream>
using namespace std;
// Función que cuenta la cantidad de dígitos en un número entero
int contar_digitos(int numero) {
    int contador = 0; 
    do {
        numero /= 10;  
        ++contador;    
    } while (numero != 0); 
    return contador; 
}

// Función principal
int main() {
    int numero_ejemplo = 12345678; 
    
    // Imprimir el mensaje con la cantidad de dígitos
    cout << "El numero de dígitos en " << numero_ejemplo << " es: " << contar_digitos(numero_ejemplo) << std::endl;
    return 0; 
}

