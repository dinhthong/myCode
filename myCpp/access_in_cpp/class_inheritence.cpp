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
      cout << "A Vehicle is created" << endl;
  }
  
  int get_x(void) {
        cout << "User want to access value of x_protected" << endl;
        return x_protected;
  }
  void set_x(int set_val) {
        cout << "User want to set value of x_protected" << endl;
        x_protected = set_val;
  }
  protected:
        int x_protected = 15;
  private:
    int v_private = 111;
}; 

class FourWheeler { 
  public: 
    FourWheeler() 
    { 
      cout << "A 4 wheeler Vehicle is created" << endl; 
    } 
}; 
  
// sub class derived from two base classes ~ multiple inheritance
class Car: public Vehicle, public FourWheeler { 
  
}; 
  
int main() 
{    
    // creating object of sub class will invoke the constructor of base classes 
    Car obj; 
    /* we cannot access x_protected directly using this code!
       cout << obj.x_protected << endl;
       */
    cout << "Value of x is:" << obj.get_x() << endl; 
    obj.set_x(30);
    cout << "New value of x: " << obj.get_x() << endl;
    cout << "Value of x: " << obj. << endl;
    return 0; 
} 