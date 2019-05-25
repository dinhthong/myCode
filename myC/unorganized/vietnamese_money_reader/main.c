#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int intdigit(int x);
int* numbersplitter(int n,int c);
int main()
{
    int n,c;
    n=67943231;
    c=intdigit(n);
    int *a;
    a=numbersplitter(n,c);
    int i;
    for (i=0;i<c;i++)
    {
     printf("%d\n",a[i]);
    }
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
int* numbersplitter(int n,int c)
{
    static int x[10];
    int i;
    for (i=0;i<c;i++)
    {
        x[i]=n%10;
            //    printf("%d\n",n%10);
        n=n/10;
    }
    return x;
}
