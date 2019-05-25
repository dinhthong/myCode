/* C program to illustrate command line arguments 
$gcc Carguments.c -o program
./program A B C
*/
#include <stdio.h> 
// we can use both way to declare argv as pointer to a array, this array contains strings. each strings is a pointer to 
// a array of char variables
//int main(int argc, char* argv[]) 
int main(int argc, char** argv) 
{ 
    int counter; 
    printf("Program Name Is: %s",argv[0]); 
    if(argc==1) 
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
    if(argc>=2) 
    { 
        printf("\nNumber Of Arguments Passed: %d",argc); 
        printf("\n----Following Are The Command Line Arguments Passed----"); 
        for(counter=0;counter<argc;counter++) 
            printf("\nargv[%d]: %s",counter,argv[counter]); 
    } 
    return 0; 
} 