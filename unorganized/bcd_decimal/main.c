#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int bcdtodec(int bcd);
int dectobcd(int dec);
main()
{
	int x,dec;
	int bcd;
	x=145;
	printf("x value = %x\r\n",x);
	dec=bcdtodec(x);
	printf("dec value = %d\r\n",dec);
	bcd=dectobcd(dec);
	printf("bcd value = is %d\r\n",bcd);
	getch();
}

int bcdtodec(int bcd)
{
	return (bcd>>4)*10+(bcd%16);
}
//type int but the way of representation decides
//dec is 2-decimal integer number
int dectobcd(int dec)
{
//  printf("dec/10<<4=%d\r\n",(dec/10)<<4);
//	printf("dec modulus 10=%d\r\n",dec%10);
	//return ((num/10 * 16) + (num % 10));
	return (dec/10<<4)|(dec%10);
}
