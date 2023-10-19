#include <stdio.h>
#include <stdlib.h>

int sum_array(int array[], int n){
    if(n == 0){
        return 0;
    }
    else{
        return sum_array(array, n-1) + array[n-1];
    }
}

int main(int argc, char *argv[]){
    int array[] = {5, 5, 5, 5, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int suma = sum_array(array, n);
    printf("%d\n", suma);
    return 0;
}