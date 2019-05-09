//https://stackoverflow.com/questions/10075294/converting-string-to-a-double-variable-in-c

#include "stm32f4xx.h"
#include "stm32f4xx_it.h"
#include <stdio.h>
/*
Sample delay functions.
*/
char str[] = "12345.56";
volatile double d;

int main(void)
{
  while (1)
  {
		sscanf(str, "%lf", &d);
  }
}
