/* C++ program to explain class inheritance 
_multiple, multilevel, hierarchical inheritance
_hybrid inheritance
_the meaning of inheritance specifier

https://www.geeksforgeeks.org/inheritance-in-c/
https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
*/
#include <iostream> 
using namespace std; 
  
// first base class 
class Vehicle { 
  public: 
  Vehicle() 
  { 
      cout << "This is a Vehicle" << endl;
  }
  int get_x(void) {
        cout << "User want to access value of x_protected" << endl;
        return x_protected;
  }
  protected:
        int x_protected = 15;
}; 

class FourWheeler { 
  public: 
    FourWheeler() 
    { 
      cout << "This is a 4 wheeler Vehicle" << endl; 
    } 
}; 
  
// sub class derived from two base classes ~ multiple inheritance
class Car: public Vehicle, public FourWheeler { 
  
}; 
  
// main function 
int main() 
{    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car obj; 
    // we cannot access x_protected directly using this code!
    //   cout << obj.x_protected << endl;
    cout << "Value of x is:" << obj.get_x() << endl; 
    return 0; 
} 