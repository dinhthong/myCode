#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
void move(char a,char b);
void hanoitower(int n,char a,char b, char c);
main()
{
	char a,b,c;
	a='A';
	b='B';
	c='C';
	hanoitower(3,a,b,c);
	getch();
}
void hanoitower(int n,char a,char b, char c)
{
	if (n==1)
      move(a,c);
	else
{
    hanoitower(n-1,a,c,b);//van phai ghi c o giua de dam bao 3 coc nay van con nguyen, vi du neu thay o giua se thay ket qua sai lien
	move(a,c);
    hanoitower(n-1,b,a,c);
}
}
void move(char x,char y)
{
	printf("move top disk from %c to %c\n\r",x,y);
}
