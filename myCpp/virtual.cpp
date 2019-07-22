/*
https://www.learncpp.com/cpp-tutorial/122-virtual-functions/
Virtual is used in order to achieve runtime polymorphism in C++. The ardupilot get_HAL uses this to abstract the hal object.
*/
#include <iostream> 
using namespace std; 
class Base
{
public:
    virtual const char* getName() { return "Base"; } // note addition of virtual keyword
    const char* getName2() { return "Base2"; }
};
 
class Derived: public Base
{
public:
    virtual const char* getName() { return "Derived"; }
    const char* getName2() { return "Derived2"; }
};
 
int main()
{
    Derived derived;
    Base &rBase = derived;
    Derived &rDerived = derived;

    cout << "rBase2 getname2 returns " << rBase.getName2() << endl;
    cout << "And this is what we don't want!" << endl;
    cout << "----------------------------" << endl;
    std::cout << "rBase is a " << rBase.getName() << '\n';
    cout << "rDerived.getName() returns " << rDerived.getName() << '\n';
    cout << "rDerived.getName2() returns " << rDerived.getName2() << '\n';
    return 0;
}
