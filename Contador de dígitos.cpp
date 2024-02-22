#include <iostream>
using namespace std;
// Funci�n que cuenta la cantidad de d�gitos en un n�mero entero
int contar_digitos(int numero) {
    int contador = 0; 
    do {
        numero /= 10;  
        ++contador;    
    } while (numero != 0); 
    return contador; 
}

// Funci�n principal
int main() {
    int numero_ejemplo = 12345678; 
    
    // Imprimir el mensaje con la cantidad de d�gitos
    cout << "El numero de d�gitos en " << numero_ejemplo << " es: " << contar_digitos(numero_ejemplo) << std::endl;
    return 0; 
}

