#include <stdio.h>
#include <string.h>


int main(){
    char uno[5] = "1";
    char dos[5] = "2";
    printf("Uno: %s\n", uno);
    strcpy(uno, dos);
    printf("Copio el 2 en el 1\n");
    printf("Uno: %s\n", uno);
    return 0;
}