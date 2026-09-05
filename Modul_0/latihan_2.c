#include <stdio.h>


int main(){
 
    int p,n;

    printf("Masukan Potong Bagian: ");
    scanf("%d",&p);
    printf("Masukan Jumlah Teman: ");
    scanf("%d",&n);

    int result = p % n;
    int average = (p - result) / n;

    // printf("%d %d",average,result);
    printf("Teman Teman Mendapatkan %d Bagian\n", average);
    printf("Ghifari Mendapatkan %d Bagian\n", result);

    return 0;
}