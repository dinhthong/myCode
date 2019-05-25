#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
unsigned int intdigit(int x);
int main()
{
    //1 vi du ve chinh hop chap 3 cua n phan tu
    int u,v,t;
    int n;
    n=7;
    int count=0;
    for (u=1;u<=n;u++)
    {
       for (v=1;v<=n;v++)
       {
           if (v==u)
            {
                continue;
            }
           for (t=1;t<=n;t++)
       {
           if (t==v||t==u)
            {
            continue;
           }
           printf("%d %d %d\r\n",u,v,t);
           count++;
       }
       }
    }
    printf("count value: %d ",count);
    return 0;
}
