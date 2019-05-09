#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_withdrawal 3000000;
int main()
{
    unsigned int m500=3,m200=20,m100=30,m50=5,M;
    printf("How much do you want to take?\n");
    scanf("%d",&M);

    if (m500>=M/500)
    {
        printf("Rut 500k %d\n",M/500);
        M=M-500*(M/500);
        m500=m500-(M/500);
    }
    else
        {
            printf("Rut 500k %d\n",m500);
            M=M-500*m500;
            m500=m500-m500;
        }


         if (m200>=M/200)
    {
        printf("Rut 200k %d\n",M/200);
        M=M-200*(M/200);
        m200=m200-(M/200);
    }
    else
        {
            printf("Rut 200k %d\n",m200);
            M=M-200*m200;
            m200=m200-m200;
        }


 if (m100>=M/100)
    {
        printf("Rut 100k %d\n",M/100);
        M=M-100*(M/100);
        m100=m100-(M/100);
    }
    else
        {
            printf("Rut 100k %d\n",m100);
            M=M-100*m100;
            m100=m100-m100;
        }


         if (m50>=M/50)
    {
        printf("Rut 50k %d\n",M/50);
        M=M-50*(M/50);
        m50=m50-(M/50);
    }
    else
        {
            printf("Rut 50k %d\n",m50);
            M=M-50*m50;
            m50=m50-m50;
        }
    printf("How much left%d\n",M);
   // getch();
   return 0;
}
