#include <stdio.h>
#include <conio.h>
main()
{
	int Shape[7],n;
	int k=128;
	n=50;

	for (int i=0;i<8;i++)
	{
		Shape[i]=0;
		n=n%k;
		k=k/2;
		if (n>=k )
		Shape[i]=1;
	}
		for (int i=0;i<8;i++)
	printf("%d\n",Shape[i]);
	
	getch();
}
