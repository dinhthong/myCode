#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
write down numbers from 1 to N in a paper, in total how many digit one has to write
Solving sketch:
So co M chu so, thi co 9*10^(M-1) so.

*/
#define N 20
int ipow(int base, int exp);
int intdigit(int x);
int main()
{
    int n,count=0;
    n=intdigit(N);
    int i=1;
    for (;i<=n-1;i++){
         count+=9*ipow(10,i-1);
    }
   count+=(N-ipow(10,n-1)+1)*n;
   printf("One has to write %d characters",count);
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
