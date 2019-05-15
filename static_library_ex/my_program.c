//$ gcc -c my_static_lib.c -o my_static_lib.o
//ar rcs my_static_lib.a my_static_lib.o
// gcc -c my_program.c -o my_program.o
//gcc -o output my_program.o my_static_lib.a
// Now every new .c file we only need to include and compile with the archive file.
/*
References:
https://www.geeksforgeeks.org/static-vs-dynamic-libraries/
https://helloacm.com/how-to-link-static-library-in-cc-using-gcc-compiler/
pre-compiled module
*/
/* filename: driver.c  */
#include "my_static_lib.h"

void main()  
{ 
  int a= 10;
  int b= 15;
  fun(); 
  printf("result of a+b: %d", add_number(a, b));
  return 0;
} 