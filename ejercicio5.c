#include <stdio.h>

int a = 10;

void f(int a) {
a += 2;
printf("%d\n", a);
}

int main(void) {
f(a);
printf("%d\n", a);
f(66);
a += 2;
printf("%d\n", a);
f(a+2);
}

/*
12
10
68
12
16
*/