//Giai thuat insertion sort
// Nguon tham khao: http://vietjack.com/cau-truc-du-lieu-va-giai-thuat/giai-thuat-sap-xep-chen.jsp
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void swap(int *a,int *b);
int main()
{
     int a[]={14,27,2,3,10,33,-4,-9,35,19,42,44};
     int i,j;
    for (i=0;i<=sizeof(a)/sizeof(int)-2;i++)
    {
        for (j=i;j>=0;j--)
        {
            if (a[j+1]<a[j])
                swap(&a[j+1],&a[j]);
        }
    }
    for (i=0;i<=sizeof(a)/sizeof(int)-1;i++)
        printf("%d\r\n",a[i]);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
