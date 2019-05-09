#include <stdio.h>
#include <conio.h>
/* Propram to perform definite integration of a given function between
 two boundary limits input by user. Feel free to use and modify it, but
 please do not remove this comment.
 source: C for Engineering, http://c4engineering.hypermart.net */

#define N 10000
main(void) {
 float x, a, b,y, sum = 0;
 printf(
   "This program will integrate a function y = x*x + 2*x - 4 between two boundary limits.");
 printf("Enter the first boundary limit:\r\n");
 scanf("%f", &a);
 printf("Enter the second boundary limit:\r\n");
 scanf("%f", &b);
 if (a > b) {
  x = a;
  a = b;
  b = x;
 }

 for (x = a; x < b; x += (b - a) / N) {
  /* Define your function below, and include the suitable header files */
  y = x*x + 2*x - 4;
  sum += y*(b - a) / N;
 }
 printf("Value of integration is:%.3f", sum);
 getch();
}
