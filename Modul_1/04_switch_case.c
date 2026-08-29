#include <stdio.h>

int main()
{
    char platNomor;
    printf("Masukkan huruf awal plat nomor anda: ");
    scanf("%c", &platNomor);

    switch (platNomor)
    {
        case 'L':
            printf("Surabaya\n");
            break;
        case 'B':
            printf("Jakarta\n");
            break;
        case 'D':
            printf("Bandung\n");
            break;
        case 'N':
            printf("Malang/Lumajang\n");
            break;
        default:
            printf("Karakter plat nomor tidak diketahui\n");
    }
    return 0;
}