#include <stdio.h>
#include <stdlib.h>
/*
Cau hoi:
tang luong 6 thang tang 5k
hoac là tang luong 12 thang tang 15k
*/
int main () {
    unsigned long int T1=0,T2=0;
    unsigned long int i;
    for (i=1;i<300;i++)
    {
        T1+=15*(i/12);
        T2+=5*(i/6);
        printf("T1=%d,T2=%d\n\r",T1,T2);
    }

    return 0;
}
