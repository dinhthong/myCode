
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef int* pint;
main()
{
    pint a,b;
   // b=34;
    int x=25,y=10;
    a=&x;
    b=&y;
    printf("%d\n",*a);
    printf("%d\n",*b);
    double m=33.923;
    char s[100];
    sprintf(s,"%lf",m);
    printf("%lf\r\n",m);
    int i=0;
    for (;i<=strlen(s)-1;i++)
        printf("%c\r\n",s[i]);
    getch();
}
