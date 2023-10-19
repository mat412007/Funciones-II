#include <stdio.h>
#include <stdlib.h>

int mcd(int a, int b){   //caso base
    if(b == 0){
        return a;            
    }
    return mcd(b, a % b);  //paso recursivo
}

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("mcd(%d, %d) = %d\n", a, b, mcd(a, b));
    return 0;
}