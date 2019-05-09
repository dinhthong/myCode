#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int x;
    printf("Please input:\n");
    scanf("%d",&x);
    int i,sum=0;
    for (i=1;i<=x;i++)
    {
        if (x%i==0)
            sum+=i;
    }
    printf("O:%d\n",sum);
    return 0;
}

