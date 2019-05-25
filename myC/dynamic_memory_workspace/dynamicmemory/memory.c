#include <stdio.h> 
#include <stdlib.h>
#define N 5
int main() { 
           /* I am C developer */ 
    int *ptr, *ptr2;
    //int* ptr2;
    ptr =(int *)malloc(N*sizeof(int));
    ptr2=(int *)calloc(N, sizeof(int));
    for (int i = 0; i < N; i++) {
     //   ptr2[i]=rand();
        ptr[i]=rand();
    //    printf("Hello, The %d address is %d \n", i, &ptr[i]); 
  //  printf("Hello, The %d address is %d ", i, ptr2+i); 
    printf("Hello, The %d value is %d ", i, ptr[i]); //or *(ptr+1)
    printf("Hello, The %d address is %d \n", i, ptr+i); 
    }        
    free(ptr);
    printf("The pointer address after free function is %d \n", ptr); 
    for (int i = 0; i < N; i++) {
    printf("Hello, The %d value is %d \n", i, ptr[i]); //or *(ptr+1)
    }   
    return 0; 
}