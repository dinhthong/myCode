//De bai: viet lien tiep cac so tu 1 den 2000. So thu 2009 cua day so do la so nao
//Tham khao: http://vietjack.com/cau-truc-du-lieu-va-giai-thuat/giai-thuat-sap-xep-chon.jsp
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[]={14,33,27,10,35,19,42,44};
    int i,j,min,index;
    for (i=0;i<=sizeof(a)/sizeof(int)-2;i++)
    {
        min=a[i];
        index=i;
        for (j=i+1;j<=sizeof(a)/sizeof(int)-1;j++)
        {
            if (a[j]<min)
               {
                 min=a[j];
                 index=j;
               }
        }
        a[index]=a[i];
        a[i]=min;
    }
    for (i=0;i<=sizeof(a)/sizeof(int)-1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
