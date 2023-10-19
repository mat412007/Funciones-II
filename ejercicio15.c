#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if (n == 0) return 0;
    return sum(n / 10) + n % 10;
    
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%d\n", sum(n));
    return 0;
}