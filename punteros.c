#include <stdio.h>

int main () {
int num=150, a;
int *x; //puntero

x=&num; // almacena la direccion de num
a=*x;


printf ("%d %d %p",num, a, x);


float pi = 3.1416, decimal;
float *ptrf; // definicion de puntero

ptrf = &pi;
decimal = *ptrf;
printf ("%f %f %p",pi, decimal, ptrf);
    return 0;
}