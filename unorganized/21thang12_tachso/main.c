#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
unsigned int intdigit(int x);
int main()
{
    unsigned int n,s;
    printf("input?\n");
    scanf("%d",&n);
    s=intdigit(n);
    char ch[s];
    unsigned int X[s-1]; // output
    sprintf(ch,"%d",n);
    unsigned int i=0;
    for (i=0;i<=s-1;i++){
            X[i]=ch[i]-48;
        printf("%d\n",X[i]);
    }

    return 0;
}
unsigned int intdigit(int x)
{
    unsigned int count=0;
    while(x>=10)
    {
        count++;
        x=x/10;
    }
    return count+1;
}
