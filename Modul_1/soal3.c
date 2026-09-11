#include <stdio.h>

int main()
{
    int I1, I2, I3, I4;
    int nilai;

    printf("Masukkan I1 I2 I3 I4: ");
    scanf("%d %d %d %d", &I1, &I2, &I3, &I4);

    // Mengubah biner menjadi desimal
    nilai = I1 * 8 + I2 * 4 + I3 * 2 + I4 * 1;

    printf("Nilai digit: %d\n", nilai);

    switch (nilai)
    {
        case 0:
            printf("A = 1\n");
            printf("B = 1\n");
            printf("C = 1\n");
            printf("D = 1\n"); 
            printf("E = 1\n");
            printf("F = 1\n");
            printf("G = 0\n");
            break;

        case 1:
            printf("A = 0\n");
            printf("B = 1\n");
            printf("C = 1\n");
            printf("D = 0\n");
            printf("E = 0\n");
            printf("F = 0\n");
            printf("G = 0\n");
            break;

        case 2:
            printf("A = 1\n");
            printf("B = 1\n");
            printf("C = 0\n");
            printf("D = 1\n");
            printf("E = 1\n");
            printf("F = 0\n");
            printf("G = 1\n");
            break;

        case 3:
            printf("A = 1\n");
            printf("B = 1\n");
            printf("C = 1\n");
            printf("D = 1\n");
            printf("E = 0\n");
            printf("F = 0\n");
            printf("G = 1\n");
            break;

        case 4:
            printf("A = 0\n");
            printf("B = 1\n");
            printf("C = 1\n");
            printf("D = 0\n");
            printf("E = 0\n");
            printf("F = 1\n");
            printf("G = 1\n");
            break;

        case 5:
            printf("A = 1\n");
            printf("B = 0\n");
            printf("C = 1\n");
            printf("D = 1\n");
            printf("E = 0\n");
            printf("F = 1\n");
            printf("G = 1\n");
            break;

        case 6:
            printf("A = 1\n");
            printf("B = 0\n");
            printf("C = 1\n");
            printf("D = 1\n");
            printf("E = 1\n");
            printf("F = 1\n");
            printf("G = 1\n");
            break;

        case 7:
            printf("A = 1\n");
            printf("B = 1\n");
            printf("C = 1\n");
            printf("D = 0\n");
            printf("E = 0\n");
            printf("F = 0\n");
            printf("G = 0\n");
            break;

        case 8:
            printf("A = 1\n");
            printf("B = 1\n");
            printf("C = 1\n");
            printf("D = 1\n");
            printf("E = 1\n");
            printf("F = 1\n");
            printf("G = 1\n");
            break;

        case 9:
            printf("A = 1\n");
            printf("B = 1\n");
            printf("C = 1\n");
            printf("D = 1\n");
            printf("E = 0\n");
            printf("F = 1\n");
            printf("G = 1\n");
            break;

        default:
            printf("Input tidak valid\n");
    }

    return 0;
}