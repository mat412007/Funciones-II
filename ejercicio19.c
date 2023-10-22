#include <stdio.h>
#include <stdlib.h>

int binarioAGray(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        // Obtener el dígito más a la derecha del número binario
        int digitoDerecho = n % 10;
        
        // Obtener el resto del número sin el dígito derecho
        int restoNumero = n / 10;
        
        // Llamada recursiva para obtener el código Gray del resto del número
        int grayResto = binarioAGray(restoNumero);
        
        // Calcular el nuevo dígito derecho del código Gray
        int nuevoDigitoDerecho = (digitoDerecho + grayResto) % 2;
        
        // Construir el número en código Gray
        return nuevoDigitoDerecho + grayResto * 10;
    }
}

int main(int argc, char *argv[]) {
    int numeroBinario = atoi(argv[1]);
    
    // Solicitar al usuario ingresar un número binario
    printf("Ingrese un numero binario: %d\n", numeroBinario);
    
    // Llamar a la función para convertir a código Gray
    int gray = binarioAGray(numeroBinario);
    
    // Mostrar el resultado
    printf("El codigo Gray es: %d\n", gray);

    return 0;
}