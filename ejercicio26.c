#include <stdio.h>
#include <stdlib.h>

void print_move(int start, int end){
    printf("%d => %d\n", start, end);
}

void hanoi(int n, int start, int end){
    if(n == 1){
        print_move(start, end);
    }
    else{
        int other = 6 - (start + end);
        hanoi(n-1, start, other);
        print_move(start, end);
        hanoi(n-1, other, end);
    }
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int start = atoi(argv[2]);
    int end = atoi(argv[3]);
    hanoi(n, start, end);
    return 0;
}