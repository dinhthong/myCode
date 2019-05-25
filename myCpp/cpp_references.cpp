/*
https://www.geeksforgeeks.org/references-in-c/
https://www.tutorialspoint.com/cplusplus/returning_values_by_reference.htm
*/
#include<iostream> 
using namespace std; 
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
double& setValues( int i ) {
   return vals[i];   // return a reference to the ith element
}

int main() 
{ 
  int x = 10; 
  // ref is a reference to x. 
  // When a variable is declared as reference, it becomes an alternative name for an existing variable
  int& ref = x; 
  
  // Value of x is now changed to 20 
  ref = 20; 
  cout << "x = " << x << endl ; 
  // Value of x is now changed to 30 
  x = 30; 
  cout << "ref = " << ref << endl ; 
  
   setValues(1) = 20.23; // change 2nd element
   double &refvals3 = setValues(3);
   refvals3 = 170.8;  // change 4th element
 
   cout << "Value after change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }

  return 0; 
} 