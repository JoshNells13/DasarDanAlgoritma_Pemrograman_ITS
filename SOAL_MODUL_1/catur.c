#include <stdio.h>

int main() {
    char awal[3], akhir[3];
    int dx, dy;
    int ada = 0;

    scanf("%s %s", awal, akhir);

    // Hitung jarak kolom
    dx = akhir[0] - awal[0];

    // Hitung jarak baris
    dy = akhir[1] - awal[1];

    // Ubah menjadi nilai positif
    if (dx < 0)
        dx = -dx;

    if (dy < 0)
        dy = -dy;

    // KUDA
    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        printf("KUDA");
        ada = 1;
    }

    // BENTENG
    if (dx == 0 || dy == 0) {
        if (ada)
            printf(" ");

        printf("BENTENG");
        ada = 1;
    }

    // GAJAH
    if (dx == dy && dx > 0) {
        if (ada)
            printf(" ");

        printf("GAJAH");
        ada = 1;
    }

    // RATU
    if ((dx == 0 || dy == 0) || dx == dy) {
        if (ada)
            printf(" ");

        printf("RATU");
        ada = 1;
    }

    // Tidak ada bidak yang cocok
    if (ada == 0) {
        printf("TIDAK ADA");
    }

    return 0;
}