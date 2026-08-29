#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Halo";
    printf("%s\n", str);

    char kata[100];
    printf("Masukkan kata (tanpa spasi): ");
    scanf("%s", kata);
    printf("-- %s\n", kata);

    char kalimat[100];
    printf("Masukkan kalimat (boleh ada spasi): ");
    getchar();
    scanf("%[^\n]s", kalimat);
    printf("-- %s\n", kalimat);

    printf("Panjang \"%s\" adalah %d\n", str, (int)strlen(str));
    return 0;
}