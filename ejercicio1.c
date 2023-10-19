#include <stdio.h>
#include <stdlib.h>

int x = 10;
void mas_dos(){
    x += 2;
}

int n = 5;
int a[] = {1, 2, 3, 4, 5};
void mas_dos2(){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Array modificado: ");
    for(int j = 0; j < n; j++){
        a[j] += 2;
        printf("%d ", a[j]);
    }
    printf("\n");
}

int main(){
    printf("Numero original: %d\n", x);
    mas_dos(x);
    printf("Numero modificado: %d\n", x);
    printf("Array original: ");
    mas_dos2(a, n);
    return 0;
}