#include <stdio.h> 
// A normal function with an int parameter 
// and void return type 
int add(int a, int b) 
{ 
    return (a+b); 
} 
int subtract(int a, int b) 
{ 
    return (a-b); 
} 
int function_has_funcpointer_arg(int (*func_pointer)(int, int), int m,int n);
struct function_struct {
    int (*fun_ptr1)(int, int);
    int (*fun_ptr2)(int, int);
} struct1;

int main() 
{  
    int x;
    int (*fun_ptr)(int, int) = &add;  // & removed 
    x = fun_ptr(4, 25);  // * removed 
    printf("\n output: %d\n", x);
    struct1.fun_ptr1=add;
    struct1.fun_ptr2=subtract;
    printf("\n output: %d\n", struct1.fun_ptr2(10,5));
    printf("\n output function accepts function pointer as argument: %d\n", function_has_funcpointer_arg(&add,50,2));
    return 0; 
}

int function_has_funcpointer_arg(int (*func_pointer)(int, int), int m,int n) {
    int temp;
    // temp = (*func_pointer)(m,n); also works
    temp = func_pointer(m, n);
    return temp+5;
}