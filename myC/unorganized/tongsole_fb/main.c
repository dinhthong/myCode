#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
double sum_odd(int n);
int main()
{
    int T,num;
    double a[10000];
    int i;
    printf("Nhap so bo test T\n");
    scanf("%d",&T);
    for (i=0;i<=T-1;i++)
    {
printf("Nhap so test thu %d\n",i+1);
scanf("%d",&num);
a[i]=sum_odd(num);
    }
    printf("Display result:\n");
    for (i=0;i<=T-1;i++)
    {
        printf("Ket qua thu %d: %lf\n\r",i+1,a[i]);
    }
    return 0;
}
double sum_odd(int n)
{
    if (n==1)
        return 1;
    else
        return sum_odd(n-1)+1/(double)(2*n-1);
}
