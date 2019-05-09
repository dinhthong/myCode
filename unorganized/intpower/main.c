#include <stdio.h>
#include <stdlib.h>
int myipow(int base,int p);
int main()
{
    int r;
    r=myipow(4,6);
    printf("yeu mai mai yeu %d\r\n",r);
    return 0;
}
int myipow(int base,int p)
{
    int num=1;
    while (p>0)
    {
      num*=base;
      p--;
    }
    return num;
}
