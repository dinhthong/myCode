#include <stdio.h>
#include <stdlib.h>
/*
https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm
*/
int main () {
    /* brief
   // Initial memory allocation
   char *str;
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);

  //  Reallocating memory
   str = (char *) realloc(str, 19);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);
   free(str);

     */
   int x;
   printf("x's Address = %d\n",&x);
   int *pint;//pint: pointer point to address of the integer value
   pint = (int *) malloc(4);
   *pint=10;
   printf("Int = %d,  Address = %u\n", *pint, pint);
   return(0);
}
