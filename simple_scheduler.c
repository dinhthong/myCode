/*
Date: May 25 2019
Based on Ardupilot's scheduler. Can be used in embedded applications.
Modify the task's content to adjust execution time.
$gcc simple_scheduler.c -o ./build/simple_scheduler

#References:
https://github.com/ArduPilot/ardupilot/blob/master/libraries/AP_Scheduler/AP_Scheduler.cpp
https://github.com/ArduPilot/ardupilot/blob/master/ArduCopter/ArduCopter.cpp
*/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
// library for getting time in us starting from when the program is run
#include <sys/time.h>
#define TASK_COUNT 4
void TaskA(void) {
    printf("Task A is running\n\r");
}
void TaskB(void) {
    printf("Task B is running\n\r");
    usleep(500);
}
void TaskC(void) {
    printf("Task C is running\n\r");
    usleep(1000);
}
void TaskD(void) {
    printf("Task D is running\n\r");
}
void fast_loop(void) {
    printf("This is fast loop \n\r");
}
unsigned long get_us_tick(void);
void scheduler_run(unsigned int t_available);
unsigned int main_loop_tick = 0, loop_rate_hz = 400;
unsigned long time_available, sample_time_us, loop_period_us;

struct task {
    void (*task_fnc)(void); //pointer to function
    unsigned int task_rate_hz;
    unsigned int last_run; // tick count for each task, used for ensuring task_rate_hz
    unsigned int max_time_micros; // maximum execution time in microseconds.
} task_list[]={
    {TaskA, 50, 0 , 100},
    {TaskB, 100, 0, 500},
    {TaskC, 200, 0, 200},
    {TaskD, 400, 0, 200}
};
 
int main(int argc, char *argv[])
{
    unsigned long time_usecond;
    unsigned long start_time_usecond;
    double time_sec;
    loop_period_us = 1000000/loop_rate_hz;
    start_time_usecond = get_us_tick();
    while(1) {
    printf("----------------------------------------\n");
    sample_time_us = get_us_tick();    
    fast_loop();
    main_loop_tick++;
    time_available = (sample_time_us + loop_period_us) - get_us_tick();
    printf("time available is: %lu [us]\n", time_available);
    scheduler_run((unsigned int)time_available);
    time_usecond = get_us_tick();
    time_usecond -= start_time_usecond;
    time_sec = (double)time_usecond/1000000;
    printf ("Current tick = %lu microseconds\n", time_usecond);
    printf ("Current tick = %lf seconds\n", time_sec);
    }
    // never reach return 0
    return 0;
}
void scheduler_run(unsigned int t_available) {
    printf("In the scheduler function!\n");
    for (int i=0; i< TASK_COUNT; i++) {
        unsigned int dt = main_loop_tick - task_list[i].last_run;
        printf("dt[%d] has value: %u\n", i, dt);
        unsigned int interval_ticks = loop_rate_hz/task_list[i].task_rate_hz;
        if (interval_ticks < 1) {
            interval_ticks = 1;
        }
        if (dt < interval_ticks) {
            continue;
        }
        unsigned int task_start = get_us_tick();
        task_list[i].task_fnc();
        task_list[i].last_run = main_loop_tick;
        unsigned int time_taken = get_us_tick() - task_start;
        printf("Time taken for the task is : %u [us]\n", time_taken);
        if (time_taken > task_list[i].max_time_micros) {
            // the event overran!
            printf("Scheduler overrun task\n");
        }
        if (time_taken >= t_available) {
            t_available = 0;
            break;
        }
        t_available -= time_taken;
    }
}
unsigned long get_us_tick(void) {
    struct timeval tv1;
    gettimeofday(&tv1, NULL);
    return (tv1.tv_sec*1000000 + tv1.tv_usec);
}