// pointer to functions
#include <iostream>
using namespace std;

struct DateStruct
{
    int year;
    int month;
    int day;
};

void print(DateStruct &date)
{
    cout << "Today is:" << endl;
    std::cout << date.year << "/" << date.month << "/" << date.day;
}
int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}
/*
The third ardument to this function is new!
It's called Reference argument and it's designed to be used as parameters (arguments) to functions.
Search for reference in C++ for more details!
*/
void function_multiply(int *p,int *q, int &result) {
    result = (*p)*(*q);
}
int main ()
{
  int m ,n;
  int out_mul;
  int (*minus)(int,int) = subtraction;

  m = operation (7, 5, addition);
  n = operation (20, m, minus);
  cout << n;
  cout << endl;
  int mula, mulb;
  mula = 10;
  mulb = 11;
  function_multiply(&mula,&mulb, out_mul);
  cout << "out_mul is =" << out_mul;
  cout << endl;
  DateStruct today { 2020, 10, 14 }; // use uniform initialization

  today.day = 16; // use member selection operator to select a member of the struct
  print(today);
  cout << endl;
  return 0;
}