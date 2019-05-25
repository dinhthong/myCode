#include <math.h>
#include <stdio.h>
#include <stdlib.h>
unsigned int taxi_cal(double n);
int main()
{
    double d;
    printf("Please enter total distance in kilometer\r\n");
    scanf("%lf",&d);
    printf("Total money you need to pay:\r\n%d",taxi_cal(d));
    return 0;
}
unsigned int taxi_cal(double n)
{
    double money;
    if (n<=1){money=15000.0*n; printf("Hello");}

    else if (n<=5)
        money=15000+(n-1)*13500;
    else if (n<=120)
        money=15000+4*13500+(n-5)*11000;
    else
        money=(15000+4*13500+(n-5)*11000)*0.9;
        return money;
}
