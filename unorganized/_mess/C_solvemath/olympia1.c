//De bai: viet lien tiep cac so tu 1 den 2000. So thu 2009 cua day so do la so nao
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int ipow(int base, int exp);
int intdigit(int x);
int main()
{
   int s[5000];
   int i=1,c=0;
    for (;i<=2000;i++)
    {
        int temp=i;
        int n;
        n=intdigit(i);

       for (;n>=1;n--)
       {
           s[c]=temp/ipow(10,n-1);
           temp=temp%ipow(10,n-1);
           printf("%d",s[c]);
           c++;
       }
    }
    //so thu 2009
   printf("so thu 2009 \r\n %d",s[2008]);
    return 0;
}
int intdigit(int x)
{
    int count=0;
    while(x>=10)
    {
        count++;
        x=x/10;
    }
    return count+1;
}

int ipow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}
