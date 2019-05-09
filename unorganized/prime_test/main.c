#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int is_prime(unsigned int n);
int main()
{
    unsigned int x;
    //printf("input=?\n");
  //  scanf("%d",&x);
   // printf("ketqua la:%d",is_prime(x));
    //Print prime number from 1 to n
    unsigned int i;
    for (i=1;i<=10000;i++)
    {
        if (is_prime(i)==1)
            printf(" %d,",i);
    }
    return 0;
}
int is_prime(unsigned int n)
{
    if (n<=1)
        return 0;
    else if (n<=3)
        return 1;
    else if (n%2==0 || n%3==0)
        return 0;
    int i=5;
    while(i*i<=n)
    {
        if (n%i==0||n%(i+2)==0)
            return 0;
        i+=6;
    }
    return 1;
}
