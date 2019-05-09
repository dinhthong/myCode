#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int thi(int x,int *y);
int main()
{
    int i=1,j=1;
    printf("%d %d %d",i,j,thi(i,&j));
    return 0;
}
int thi(int x,int *y)
{
    x*=2;
    *y+=1;
    return x+*y;
}
