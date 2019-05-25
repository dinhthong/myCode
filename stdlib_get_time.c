#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
int main(void) {
    struct timeval tv;
    time_t curtime;
    char buffer[50];
while (1) {
   gettimeofday(&tv, NULL); 
   curtime=tv.tv_sec;
   strftime(buffer,30,"%m-%d-%Y  %T.",localtime(&curtime));
   printf("%s%ld\n", buffer, tv.tv_usec);
   // sleep for 0.5 sec
   usleep(500000);
}
    return 0;
}
