#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int *pint1, *pint2;
	long int a[5];
	char d;
	for (int i=0;i<=4;i++)
	{
		a[i]=i+3;
		printf("a%d is %d\r\n",i,a[i]);
	}
	printf("address of first 2 variable of array is &a[0]=%d and &a[1]=%d",&a[0],&a[1]);
	//a[0]=4000000000;
	printf("size of a0 in bytes = %d",sizeof(d));
	return 0;
}
