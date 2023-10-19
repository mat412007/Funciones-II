#include <stdio.h>
#include <stdlib.h>

int catalan(int n){
    if(n == 0){
        return 1;
    }
    else{
        int r = 0;
        for(int i = 0; i < n; i++){
            r += catalan(i) * catalan(n-i-1);
        }
        return r;
    }
}

int main(int argc, char *argv[]){
    int contador = atoi(argv[1]);
    for(int i = 0; i < contador; i++){
        printf("%d ", catalan(i));
    }
    printf("\n");
    return 0;
}