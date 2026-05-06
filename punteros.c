#include <stdio.h>

int main () {
int num=150, a;
int *x; //puntero

x=&num; // almacena la direccion de num

printf ("%d %p",num, x);
    return 0;
}