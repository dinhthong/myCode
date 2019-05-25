#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
   char str[50];
   float x[30];
   int *pint;
   int *pint2;
   pint = (int *)malloc(10*sizeof(int));
   pint2 = (int *)malloc(15*sizeof(int));
   for (int j=0; j<5; j++) {
       pint[j]=rand();
   }
    for (int j=0; j<15; j++) {
       pint2[j]=rand();
       printf("the %d value pint2 is :%d\n", j, pint2[j]);
   }
   for (int k=0; k<10; k++) {
   printf("the %d value is :%d\n", k, pint[k]);
   }
   // clear first 3 elements 
   memset(pint, 0, 3*sizeof(int));
   for (int k=0; k<10; k++) {
   printf("the %d value is :%d\n", k, pint[k]);
   }
   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str, 'g', 7);
   puts(str);
   printf("size of pint2 is %d\n",sizeof(pint));
   memset(pint2, 0, 15*sizeof(int));
       for (int j=0; j<15; j++) {
    //   pint2[j]=rand();
       printf("the %d value pint2 is :%d\n", j, pint2[j]);
   }
   return(0);
}