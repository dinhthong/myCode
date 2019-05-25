#include <stdio.h>
#include <conio.h>
#include <math.h>
//Fibo definition: 1 1 2 3 5 8 13 21 34...
int fibo(int n);
main()
{
	int x;
	x=fibo(10);
	printf("x number = %d",x);
	getch();
}
int fibo(int n)
{
	if (n==1||n==2)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}
