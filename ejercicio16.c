#include <stdio.h>
#include <stdlib.h>

int power(int a, int n){
    if(n == 0) return 1; 
    return power(a,n - 1) * a;
}

//2^5 = 2^4 * 2
//2^4 = 2^3 * 2

//a^n = a^n-1 * a 

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int n = atoi(argv[2]);
    printf("%d\n", power(a, n));
    return 0;
}