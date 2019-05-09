#include <stdio.h> 
#include <stdlib.h>

int main() { 
    int xx=60;
int **ppint;
int *pint;
//pint = (int*)malloc(sizeof(int));
//*pint = 5;
pint=&xx;
ppint = &pint;
           /* I am C developer */ 
           printf("Hello, I am C developer! \n"); 
printf("pint = %d\n\r*pint=%d\n\rand &pint=%d", pint, *pint, &pint);
printf("\n\r--------------- \n\r"); 
 printf("ppint = %d", ppint);
 printf("\n\r **ppint = %d", **ppint);
           return 0; 
}