//include necessary libraries
#include <conio.h>
#include <stdio.h>
#include <string.h>
#define MAX 100
main()
{
        char text[MAX],input;
LOOP:    printf("Please enter input linux terminal code!:\n");
char in[MAX];
	gets(in); //must be none
	//get input char array
	strcat(text,"<pre class=\"theme:github font-size:14 toolbar:2 nums:false lang:default highlight:0 decode:true \">");
	//how to write double quotation marks in C
	strcat(text,in);
	strcat(text,"</pre>");
	printf("%s",text);
	printf("\r\n Do you want to continue? (if yes type: y)\n");
	//get a single char
	input=getchar();
	if (input=='y'){
            //free(in);
        	goto LOOP;
	}
}
