//Bubble sort
//Tham khao: http://vietjack.com/cau-truc-du-lieu-va-giai-thuat/giai-thuat-sap-xep-noi-bot.jsp
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void swap(int *a,int *b);
int main()
{
    int a[]={1,14,26,35,33,10,66,90,78};
    int j,dontstop=1,count=0;
while(dontstop==1)
{
    count++;
      dontstop=0;
for (j=0;j<=sizeof(a)/sizeof(int)-2;j++)
{
    if (a[j+1]<a[j])
    {
     swap(&a[j],&a[j+1]);
     dontstop=1;
    }
}
}
for (j=0;j<=sizeof(a)/sizeof(int)-1;j++)
    {
        ("%d\n\r",a[j]);
    }
    printf("Number of loop to complete this sorting task using Bubble sort algorithm: %d\n\r",count-1);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
temp=*a;
*a=*b;
*b=temp;
}


