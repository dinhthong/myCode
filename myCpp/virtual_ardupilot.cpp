/*
https://www.learncpp.com/cpp-tutorial/122-virtual-functions/
https://stackoverflow.com/questions/2391679/why-do-we-need-virtual-functions-in-c
Virtual keyword is used in order to achieve runtime polymorphism in C++. The ardupilot get_HAL uses this to abstract the hal object.
The code in this example tries to demonstrate ardupilot's implementation. Please dive into the ardupilot libraries/HAL and study out!!
*/
#include <iostream> 
using namespace std; 
class HAL
{
public:
    virtual const char* ardupilot_run() = 0; // pure virtual function
    virtual const char* main_loop() { return "main_loop from class `HAL`"; } // note addition of virtual keyword
    const char* getName2() { return "getName2 from HAL"; }
    // this function won't be orverridden by any derived class 
    virtual const char* simple() { return "simple() from class `HAL`"; }
};
 
class HAL_ChibiOS: public HAL
{
public:
    const char* ardupilot_run() override { return "ardupilot_run from class `HAL_ChibiOS`"; } // override keyword
    const char* main_loop() override { return "main_loop from class `HAL_ChibiOS`"; }
    const char* getName2() { return "getName2 from HAL_ChibiOS"; }
};
class HAL_ChibiOS_A: public HAL_ChibiOS 
{
    public:
    // It's ok not to have override keyword for overriding virtual function from base class
    const char* ardupilot_run() { return "HAL_ChibiOS_A"; }
};
int main()
{
    HAL_ChibiOS derived;
    HAL &rBase = derived;

    cout << "rBase.getname2() returns: " << rBase.getName2() << endl;
    cout << "And this is what we don't want! And it's because the function getname2() isn't virtual" << endl;
    cout << "----------------------------" << endl;
    // the C++ will resolve between the HAL Class to HAL_ChibiOS class and look for the most-derived version of this virtual function.
    std::cout << "rBase.ardupilot_run() returns: " << rBase.ardupilot_run() << '\n';
    cout << "Even the object is created using Base class (Class HAL)! And this is what we expect" << endl;
    cout << "----------------------------" << endl;
    HAL_ChibiOS_A halChiA;
    HAL &rBase2 = halChiA;
    cout << "rBase2.main_loop() returns: " << rBase2.main_loop() << '\n';
    cout << "----------------------------" << endl;
    cout << "rBase2.simple() returns: " << rBase2.simple() << '\n';
    return 0;
}