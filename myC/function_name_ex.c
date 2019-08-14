/*
_Brief
a C compiler that follows the C99 standard or later. We can get function's name where the at where code is currently running.
_Reference(s):
https://stackoverflow.com/questions/15349761/get-called-function-name-as-string
https://www.includehelp.com/c-programs/print-the-current-function-name-by-using__func__in-c.aspx
*/
#include <stdio.h>
#include <stdlib.h>
int myipow(int base, unsigned int p);
int main() {
    int r;
    r = myipow(-2, 11);
    printf("Result: %d\r\n", r);
    return 0;
}
int myipow(int base, unsigned int p) {
    printf("Inside function: %s\n", __func__);
    int num = 1;
    while (p > 0)
    {
      num*=base;
      p--;
    }
    return num;
}