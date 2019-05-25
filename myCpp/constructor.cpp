// https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm
// https://stackoverflow.com/questions/15999123/const-before-parameter-vs-const-after-function-name-c
#include <iostream>
#include <string>
 
class Person
{
public:
    std::string m_name;
    int m_age;
 
    std::string getName() const { return m_name; }
    int getAge() const { return m_age; }
    // constructor when class object is ....
    // constructor's arguments
    // define default values
    // and set the variables - It's called Using Initialization Lists to Initialize Fields
    Person(std::string name = "", int age = 0) : m_name(name), m_age(age)
    {
    }

};
 
// Employee publicly inherits from Person
class Employee: public Person
{
public:
    double m_hourlySalary;
    long m_employeeID;
 
    Employee(double hourlySalary = 0.0, long employeeID = 0)
        : m_hourlySalary(hourlySalary), m_employeeID(employeeID)
    {
    }
 
    void printNameAndSalary() const
    {
        std::cout << m_name << ": " << m_hourlySalary << '\n';
    }
    void printAge()
    {
        std::cout << "This object's m_age is: ";
        std::cout << m_age << '\n';
    }
};
 
int main()
{
    Employee frank(20.25, 12345);
    frank.m_name = "Frank"; // we can do this because m_name is public

    frank.printNameAndSalary();
    frank.printAge();
    Employee thong(10.2);
    thong.printNameAndSalary();
    return 0;
}