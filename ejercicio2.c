#include <stdio.h>
#include <stdlib.h>

int a = 5;
int b = 10;
void swap(){
    int cambio = a;
     a = b;
     b = cambio;
}

int array[] = {1, 2, 3, 4, 5};
int i = 0;
int j = -1;
void swap_2(){
    for(int x = 0; x < 3; x++){
        int cambio = array[i];
        array[i] = array[j];
        array[j] = cambio;
        i++;
        j--;
    }
}

int main(){
    printf("A inicial: %d\nB inicial: %d\n", a, b);
    swap(a, b);
    printf("A modificado: %d\nB modificado: %d\n", a, b);
    printf("Array inicial: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    swap_2(array, i, j);
    printf("Array modificado: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
}