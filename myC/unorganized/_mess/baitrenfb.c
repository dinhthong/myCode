#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int bcdtodec(int bcd);
int dectobcd(int dec);
main()
{
	int n,i,j;
	printf("n input?");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		printf("%d",j);
		for (;j<=n;j++)
		printf("*");
		printf("\r\n");
	}
	getch();
}
