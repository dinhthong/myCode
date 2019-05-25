#include <stdio.h>
#include <conio.h>

main()
{
	float s,a,b;
	printf("Gio vao ca? : ");
	scanf("%f",&a);
	
	do {
		printf("Ko gop le nhap lai. Gio vao ca? : ");
        scanf("%f",&a);
	}
	while(a<6 || a>18);
	
printf("Gio ra ca : ");
scanf("%f",&b);
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
printf("So tien nhan duoc la =%f",s);
getch();
}
