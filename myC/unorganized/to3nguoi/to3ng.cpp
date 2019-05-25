#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
	int n;
	printf("input N=? \r\n");
		scanf("%d",&n);
	n=(n-1)/3;
	for (int i=1;i<=n;i++)
	{
			for (int j=1;j<=3;j++)
			{
				printf("%d ",i);
			}
	}
printf("%d",n+1);
	getch();
}
