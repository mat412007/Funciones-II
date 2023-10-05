#include <stdio.h>
#include <stdlib.h>


int a = 5;
int b = 10;
void swap(){
    int cambio = a;
     a = b;
     b = cambio;
 }

int main(){
    printf("A inicial: %d\nB inicial: %d\n", a, b);
    swap(a, b);
    printf("A modificado: %d\nB modificado: %d\n", a, b);
}