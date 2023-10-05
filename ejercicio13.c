#include <stdio.h>
#include <stdlib.h>

/*Iteracion
int sum(int n){
    int r = 0;
    for(int i = 1; i <= n; i++){
        r += i;
    }
    return r;
}*/

/* Alternativa
int sum(int n){
    if(n == 0) return 0; 
    return n *(n + 1) / 2;
}*/

//Recursion
int sum(int n){
    if(n == 0) return 0; 
    return sum(n - 1) + n;
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%d\n", sum(n));
    return 0;
}