#include <string.h>
#include <stdio.h>
#include <conio.h>
main()
{
	FILE *stream;
	char msg[81];
	stream=fopen("D:\\tam.txt","r");
	fgets(msg,81,stream);
	printf("%s",msg);
	fclose(stream);
	getch();
}
