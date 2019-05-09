#include <stdio.h>
#include <conio.h>


void Kiemtra(int *x);
void Kiemtra(int *x)
{
	while (*x<6||*x>18)
	{
		printf("Khong hop le nhap lai vao:");
		scanf("%d",x);
	}
}
main()
{
int a,b,s;
loop: printf("Gio vao ca? : ");
	scanf("%d",&a);
Kiemtra(&a);

printf("Gio ra ca? : ");
	scanf("%d",&b);
Kiemtra(&b);

	
	if (b<a)
	{
		printf("Gio ra ca ko the be hon gio vao ca \n");
		goto loop;
	}
	

if (a<=12 && b<=12)
{
	s=(b-a)*6000;
}
else if (a<=12 && b>=12)
{
	s=(12-a)*6000+(b-12)*7500;
}
else 
{
	s=(b-a)*7500;
}
printf("So tien nhan duoc la =%d",s);
getch();
}
