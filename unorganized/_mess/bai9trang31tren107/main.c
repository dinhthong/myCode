#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned a,b,num=99;
    while (num>9)
    {
        a=num/10;
        b=num%10;
        if (a*b==2*(a+b))
            printf("%d\r\n",num);
        num--;
    }
    return 0;
}
