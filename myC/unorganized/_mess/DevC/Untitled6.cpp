#include <stdio.h>
#include <conio.h>
//pointer example
main()
{
int *pint1,*pint2,int1,int2,a[3];
char *pchar1,*pchar2,char1,char2;
a[0]=32132;
a[1]=3213134;
a[2]=32353234;
a[3]=-3123013;
char1='4';
char2='H';
pchar1=&char1;
pchar2=&char2;
int1=32;
pint1=&int1;
int2=3213123;
pint2=&int2;
printf("Phan tu output la:%p\n",pint1);
printf("Phan tu output la:%p\n",&int2);
printf("Phan tu output la:%d\n",pint1-pint2);
printf("Phan tu output la:%d\n",&a[3]-&a[0]);
printf("Phan tu output la:%p\n",pchar1);
printf("Phan tu output la:%p\n",pchar2);

	getch();
}

