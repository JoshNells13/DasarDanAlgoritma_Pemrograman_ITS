#include <stdio.h>


int main(){
 
    int tahun_lahir,tahun_sekarang;

    printf("Masukan Tahun Kelahiran: ");
    scanf("%d",&tahun_lahir);
    printf("Masukan Tahun Sekarang: ");
    scanf("%d",&tahun_sekarang);

    int umur = tahun_sekarang - tahun_lahir;

    printf("%d",umur);

    return 0;
}