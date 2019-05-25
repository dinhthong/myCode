//Working with file
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
	FILE *stream;
	char msg[81];
	stream=fopen("D:\\TAM.txt","r");
	if (stream==(FILE *)NULL)
	{
		printf("Mo file bi loi");
	}
	else {
	fgets(msg,81,stream);
	printf("%s",msg);
		fgets(msg,81,stream);
	printf("%s",msg);
			fgets(msg,81,stream);
	printf("%s",msg);
		fgets(msg,81,stream);
	printf("%s",msg);
	fclose(stream);
	}
	getch();
}
