#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int n){
    if(n == 0){
        return;
    }
    else{
        print_array(array, n-1);
        printf("%d ", array[n-1]);
    }
}

int main(int argc, char *argv[]){
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    print_array(array, n);
    printf("\n");
    return 0;
}