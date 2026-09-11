#include <stdio.h>

int main()
{
    int n,ori;

    int satuan,puluhan,ratusan;
    int hasil;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);

    satuan = n % 10;
    puluhan = (n / 10) % 10;
    ratusan = (n / 100) % 10;

    ori = n;
    hasil = (satuan * satuan * satuan) + (puluhan * puluhan * puluhan) + (ratusan * ratusan * ratusan);

    if(hasil == ori){
        printf("Nilai Armstrong");

    }else{
        printf("Bukan Nilai Armstrong");
    }
}