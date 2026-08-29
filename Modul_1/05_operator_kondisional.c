#include <stdio.h>

int main()
{
    int mark;
    printf("Masukkan nilai: ");
    scanf("%d", &mark);

    printf("%s\n", mark >= 75 ? "Lulus" : "Tidak Lulus");
    return 0;
}