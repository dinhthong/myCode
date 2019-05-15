#include <stdio.h> 
void fun(void) 
{ 
  printf("fun() called from a static library"); 
} 
int add_number(int x, int y) {
    return x+y;
}