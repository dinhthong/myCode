#include <iostream>
using namespace std;
class Base
{
protected:
    int m_value;

public:
    Base(int value)
        : m_value(value)
    {
    }

    const char* getName() { return "Base"; }
    int getValue() { return m_value; }
};

class Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }

    const char* getName() { return "Derived"; }
    int getValueDoubled() { return m_value * 2; }
};


int main()
{
    Derived derived(5);
    std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';
  /*This can be rewritten as follow:
  Derived &pDerived
  pDerived=derived;
  -> Like we normally do when pass argument for function
    */
    Derived &rDerived = derived;
    std::cout << "rDerived is a " << rDerived.getName() << " and has value " << rDerived.getValue() << '\n';
//pointer points to an address (pointer) of a object of Derived class.
/*This can be rewritten as follow:
Derived* pDerived
pDerived=&derived;
-> Like we normally do when pass argument for function
*/
    Derived* pDerived = &derived;
    std::cout << "pDerived is a " << pDerived->getName() << " and has value " << pDerived->getValue() << '\n';

    Derived Derived2 = derived;
    std::cout << "pDerived is a " << Derived2.getName() << " and has value " << Derived2.getValue() << '\n';

    Base rBase=derived;

    std::cout << "pDerived is a " << rBase.getName() << " and has value " << rBase.getValue() << '\n';
    return 0;
    /*
    This doesn't work:
    Base rBase;
    rBase=derived;
    */
}
