#include <stdio.h>

int main ()
{
    char start[3], Finish[3];

    scanf ("%s %s",start ,Finish);

    int Selisih1 = start[0] - Finish[0];
    int selisih2 = start[1] - Finish [1];
    int spasi = 0;

    if(Selisih1 != 0 || selisih2 != 0) {
    if (Selisih1 < 0){
        Selisih1 = -Selisih1;
    }
    if (selisih2 <0) {
        selisih2 = -selisih2;
    }
    if((Selisih1 == 2 && selisih2 == 1)||(Selisih1 == 1 && selisih2 == 2) ) {
        if(spasi == 1) printf(" ");
        printf("KUDA");
        spasi = 1;
    }
    if(Selisih1 == 0 || selisih2 == 0){
        if(spasi == 1)printf(" ");
        printf("BENTENG");
        spasi = 1;
    }
    if(Selisih1 == selisih2) {
        if(spasi == 1) printf(" ");
        printf("GAJAH");
        spasi = 1;
    }
    if((Selisih1 == 0 ||selisih2 == 0)||(Selisih1 == selisih2)) {
        if(spasi == 1) printf(" ");
        printf("RATU");
        spasi = 1;
    }
    }
    if(spasi == 0)printf("TIDAK ADA");
}