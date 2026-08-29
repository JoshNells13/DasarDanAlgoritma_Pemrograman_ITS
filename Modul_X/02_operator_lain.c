#include <stdio.h>

int main()
{
    int var = 10;
    int arr[3] = {1, 2, 3};
    int number = (5, 23);

    printf("sizeof(int) = %d byte\n", (int)sizeof(int));
    printf("alamat &var = %p\n", &var);
    printf("nilai var   = %d\n", var);
    printf("operator koma (5, 23) -> number = %d\n", number);
    printf("operator subscript arr[1] = %d\n", arr[1]);

    int umur = 17;
    printf("%s\n", umur >= 17 ? "Boleh bikin KTP" : "Belum boleh bikin KTP");
    return 0;
}