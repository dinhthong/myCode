#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    unsigned int n,i=0;
    int min,temp;
    printf("Nhap so phan tu n:\n");
    scanf("%d",&n);
    for (;i<=n-1;i++)
    {
        printf("Nhap phan tu thu %d\n\r",i+1);
        scanf("%d",&temp);
        if (i==0)
            min=temp;
        if (temp<min)
            min=temp;
    }
    printf("min element: %d\n\r",min);
    return 0;
}
