#include<stdio.h>
int *fun();
int* fun0();
int* getRandom();
main()
{
    int *ptr;
    ptr=fun0();
    printf("%d\n",*ptr);
    printf("%d\n",ptr);

    int *p;
    int i;
   p = getRandom();
   for ( i = 0; i < 10; i++ ) {
    //  printf("*(p + [%d]) : %d\n", i, *(p + i) );
    printf("*(p + [%d]) : %d\n", i,p[i]);
   }
   return 0;
}
int* fun()
{
    int *point;
    int a=12;
    point=&a;
    printf("%d\n",&a);
    return point;
}
int* fun0()
{
    int *point = malloc(sizeof *point);
    *point=55;
    return point;
}
int* getRandom()
{
   int  r[10];
   int i;
   /* set the seed */
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf("%d\n", r[i] );
   }
   return r;
}
