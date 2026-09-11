#include <stdio.h>

int main ()
{
    int a, b, c, p, q, r;
    int D, D1, D2;


    scanf("%d %d %d %d %d %d",&a, &b, &c, &p, &q, &r);
    D = a*q - b*p;
    D1 = c*q - b*r;
    D2 = a*r - c*p;

    if(D !=0) {
   double  x = (double) D1 / D;
   double  y = (double) D2 / D;
    if (x == 0.00) x = 0.00;
    if (y == 0.00) y = 0.00;
        printf("SATU SOLUSI\n");
        printf("%.2lf %.2lf",x ,y);
    }
    else if(D == 0 && D1 == 0 && D2 == 0) {
    printf("BANYAK SOLUSI");
    }
    else {
        printf("TIDAK ADA SOLUSI");
    }
}