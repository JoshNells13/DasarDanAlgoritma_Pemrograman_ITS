#include <stdio.h>

int main()
{
    int n;

    printf("Masukkan angka (0-999): ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("nol");
    }
    else if (n < 10)
    {
        if (n == 1) printf("satu");
        else if (n == 2) printf("dua");
        else if (n == 3) printf("tiga");
        else if (n == 4) printf("empat");
        else if (n == 5) printf("lima");
        else if (n == 6) printf("enam");
        else if (n == 7) printf("tujuh");
        else if (n == 8) printf("delapan");
        else if (n == 9) printf("sembilan");
    }
    else if (n < 20)
    {
        if (n == 10) printf("sepuluh");
        else if (n == 11) printf("sebelas");
        else if (n == 12) printf("dua belas");
        else if (n == 13) printf("tiga belas");
        else if (n == 14) printf("empat belas");
        else if (n == 15) printf("lima belas");
        else if (n == 16) printf("enam belas");
        else if (n == 17) printf("tujuh belas");
        else if (n == 18) printf("delapan belas");
        else if (n == 19) printf("sembilan belas");
    }
    else if (n < 100)
    {
        int puluhan = n / 10;
        int satuan = n % 10;

        if (puluhan == 2) printf("dua puluh ");
        else if (puluhan == 3) printf("tiga puluh ");
        else if (puluhan == 4) printf("empat puluh ");
        else if (puluhan == 5) printf("lima puluh ");
        else if (puluhan == 6) printf("enam puluh ");
        else if (puluhan == 7) printf("tujuh puluh ");
        else if (puluhan == 8) printf("delapan puluh ");
        else if (puluhan == 9) printf("sembilan puluh ");

        if (satuan == 1) printf("satu");
        else if (satuan == 2) printf("dua");
        else if (satuan == 3) printf("tiga");
        else if (satuan == 4) printf("empat");
        else if (satuan == 5) printf("lima");
        else if (satuan == 6) printf("enam");
        else if (satuan == 7) printf("tujuh");
        else if (satuan == 8) printf("delapan");
        else if (satuan == 9) printf("sembilan");
    }
    else if (n < 1000)
    {
        int ratusan = n / 100;
        int sisa = n % 100;

        if (ratusan == 1)
            printf("seratus ");
        else if (ratusan == 2)
            printf("dua ratus ");
        else if (ratusan == 3)
            printf("tiga ratus ");
        else if (ratusan == 4)
            printf("empat ratus ");
        else if (ratusan == 5)
            printf("lima ratus ");
        else if (ratusan == 6)
            printf("enam ratus ");
        else if (ratusan == 7)
            printf("tujuh ratus ");
        else if (ratusan == 8)
            printf("delapan ratus ");
        else if (ratusan == 9)
            printf("sembilan ratus ");

        if (sisa == 10)
            printf("sepuluh");
        else if (sisa == 11)
            printf("sebelas");
        else if (sisa >= 12 && sisa <= 19)
        {
            if (sisa == 12) printf("dua belas");
            else if (sisa == 13) printf("tiga belas");
            else if (sisa == 14) printf("empat belas");
            else if (sisa == 15) printf("lima belas");
            else if (sisa == 16) printf("enam belas");
            else if (sisa == 17) printf("tujuh belas");
            else if (sisa == 18) printf("delapan belas");
            else if (sisa == 19) printf("sembilan belas");
        }
        else if (sisa >= 20)
        {
            int puluhan = sisa / 10;
            int satuan = sisa % 10;

            if (puluhan == 2) printf("dua puluh ");
            else if (puluhan == 3) printf("tiga puluh ");
            else if (puluhan == 4) printf("empat puluh ");
            else if (puluhan == 5) printf("lima puluh ");
            else if (puluhan == 6) printf("enam puluh ");
            else if (puluhan == 7) printf("tujuh puluh ");
            else if (puluhan == 8) printf("delapan puluh ");
            else if (puluhan == 9) printf("sembilan puluh ");

            if (satuan == 1) printf("satu");
            else if (satuan == 2) printf("dua");
            else if (satuan == 3) printf("tiga");
            else if (satuan == 4) printf("empat");
            else if (satuan == 5) printf("lima");
            else if (satuan == 6) printf("enam");
            else if (satuan == 7) printf("tujuh");
            else if (satuan == 8) printf("delapan");
            else if (satuan == 9) printf("sembilan");
        }
        else if (sisa >= 1)
        {
            if (sisa == 1) printf("satu");
            else if (sisa == 2) printf("dua");
            else if (sisa == 3) printf("tiga");
            else if (sisa == 4) printf("empat");
            else if (sisa == 5) printf("lima");
            else if (sisa == 6) printf("enam");
            else if (sisa == 7) printf("tujuh");
            else if (sisa == 8) printf("delapan");
            else if (sisa == 9) printf("sembilan");
        }
    }

    return 0;
}