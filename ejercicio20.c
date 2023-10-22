#include <stdio.h>
#include <stdlib.h>

void decimalABinario(int n) {
    if (n == 0) {
        return;
    } else {
        // Llamada recursiva para convertir la parte entera del número
        decimalABinario(n / 2);
        
        // Imprimir el bit correspondiente al residuo
        printf("%d", n % 2);
    }
}

int main(int argc, char *argv[]) {
    int numeroDecimal = atoi(argv[1]);

    printf("Ingrese un numero decimal: %d\n", numeroDecimal);

    printf("El numero en binario es: ");
    decimalABinario(numeroDecimal);
    printf("\n");

    return 0;
}