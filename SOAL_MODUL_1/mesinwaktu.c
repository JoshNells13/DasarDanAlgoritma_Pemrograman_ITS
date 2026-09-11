#include <stdio.h>

int main() {

    int H, B, T;
    int maxHari;

    scanf("%d %d %d", &H, &B, &T);


    if (B < 1 || B > 12) {
        printf("TIDAK VALID");
        return 0;
    }

    if (B == 2) {

     
        if (T % 400 == 0 || (T % 4 == 0 && T % 100 != 0)) {
            maxHari = 29;
        } else {
            maxHari = 28;
        }

    } else if (B == 4 || B == 6 || B == 9 || B == 11) {
        maxHari = 30;

    } else {
        maxHari = 31;
    }

    
    if (H >= 1 && H <= maxHari) {
        printf("VALID");
    } else {
        printf("TIDAK VALID");
    }

    return 0;
}