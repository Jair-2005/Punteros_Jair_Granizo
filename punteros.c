#include <stdio.h>

int main () {
int num=150, a;
int *x; //puntero

x=&num; // almacena la direccion de num

printf ("%d %p",num, x);


float pi = 3.1416, decimal;
float *ptrf; // definicion de puntero

ptrf = &pi;

printf ("%f %p",pi, ptrf);
    return 0;
}