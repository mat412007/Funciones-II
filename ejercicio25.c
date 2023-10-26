#include <stdio.h>
#include <stdlib.h>

double sum_array(int array[], int n){
    if(n == 0){
        return 0;
    }
    else{
        return ((sum_array(array, n-1)*(n-1)) + array[n-1]) / (double) n;
    }
}

int main(int argc, char *argv[]){
    int array[] = {6, 6, 6, 6, 6};
    int n = sizeof(array) / sizeof(array[0]);
    double promedio = sum_array(array, n);
    printf("%f\n", promedio);
    return 0;
}