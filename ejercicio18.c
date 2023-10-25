#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int n, int sum){
    if(n == 0){
        return sum;
    }
    return reverse(n / 10, (sum * 10) + (n % 10));
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%d invertido es %d\n", n, reverse(n, 0));
    return 0;
}