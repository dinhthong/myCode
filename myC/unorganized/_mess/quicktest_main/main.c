
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
/** \brief
typedef int* pint;
int x;
int y=3;
main()
{
    static h;
    int a;
    printf("%d\n%d\n%d\n%d",x,y,h,a);
    return 0;
}
 */

int count=0;
int fun();
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}
int fun()
{
  count++;
  return count;
}

