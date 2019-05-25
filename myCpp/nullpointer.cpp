// https://www.cppdeveloper.com/c-nang-cao/nullptr-la-gi-tai-sao-lai-can-nullptr/
#include <iostream>
using namespace std;
void functionTest(int n) {
    cout << "functionTest(int n) is called" << endl;
}
void functionTest(void *data) {
    cout << "functionTest(void *data) is called" << endl;
}
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
//function returns pointer
double* getAddress( int i ) {
   if (i <= 4) {
        return &vals[i];   // return a reference to the ith element
   }
   else {
       return nullptr;
   }
}
int main()
{
  std::cout << "Hello World!" << std::endl;
  functionTest(0);
  functionTest(nullptr);
  double *pdouble;
  pdouble = getAddress(3);
  cout << "pdouble value is:" << pdouble << endl;
  cout << "*pdouble value is:" << *pdouble << endl;
   pdouble = getAddress(10);
  cout << "pdouble value is:" << pdouble << endl;
  cout << "*pdouble value is:" << *pdouble << endl;
  return 0;
}
