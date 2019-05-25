#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
int i,j,x;
i=j=x=1;
while (i+j<=20)
{
if (i%2==1) i=2*i;
else i=i-1;
j=j+2*i;
x=x+2*j+1;
}
printf("%d\n%d\n%d",i,j,x);
return 0;
}
