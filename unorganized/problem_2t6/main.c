#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
long int factorial(long int n);
int main()
{
    long int n,a,b,c;
    printf("input n?=\r\n");
    scanf("%d",&n);
    n=factorial(n);
    while (n%10==0)
    {
        n=n/10;
    }
    a=n%10; //Make use of C, to omit the last digit of any integer number
    b=(n/10)%10;
    c=(n/100)%10;
    printf("%d%d%d",c,b,a);
    return 0;
}
long int factorial(long int n)
{
    if (n>=2)
        return n*factorial(n-1);
    else
        return 1;
}
