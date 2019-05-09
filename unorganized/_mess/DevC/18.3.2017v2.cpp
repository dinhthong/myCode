#include <stdio.h>
#include <conio.h>
#include <string.h>
/*
@ Description: This program uses pointer. Input: number. Output: Month in English
@ input user's string, a character to check
@output Number of the unique character in the string. Does check character exist in the string. Value of unique character in the string!
*/
char *working(char string[],int *p,int *len);
main()
{
	char string[100],c,*a;
		int len,p=0;
	printf("Please enter input string:\n");
	gets(string);
	printf("Enter any character for checking!:\n");
	c=getchar();
	len=strlen(string);
	printf("Len value:%d\n",len);
	a=working(string,&p,&len);
	printf("The number of character exists in the input string:%d!\n",len);
	for (int i=0;i<strlen(string);i++)
	{
		if (c==string[i])
		{
		printf("This character exists in the input string!");
		break;}
	}
		printf("Cac ky tu khac nhau trong chuoi la:\n");
	for (int i=0;i<=p;i++){
			printf("%c\n",a[i]);
	}
	getch();
}

char *working(char string[],int *p,int *len)
{
	
	static char a[100]; // this will keep the array value when we call the function!
	for (int i=0;i<strlen(string)-1;i++)
	{
		int check=0;
		for (int j=i+1;j<strlen(string);j++)
		{
			if (string[i]==string[j])
				check++;
		}
		if (check==1)
		{
				(*len)--;
			
		}
	if (check==0){
		a[*p]=string[i];
	(*p)++;
	}
	}
	a[*p]=string[strlen(string)-1];
	
	return a;
}
	
