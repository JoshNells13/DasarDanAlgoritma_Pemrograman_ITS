#include <stdio.h>


int main(){
 
    float a,b,c,d,e;
    printf("Masukan Angka A: ");
    scanf("%f",&a);
    printf("Masukan Angka B: ");
    scanf("%f",&b);
    printf("Masukan Angka C: ");
    scanf("%f",&c);
    printf("Masukan Angka D: ");
    scanf("%f",&d);
    printf("Masukan Angka E: ");
    scanf("%f",&e);

    int sum = a + b + c + d + e;
    float average = sum / 5;

    printf("%d %.1f",sum,average);

    return 0;
}