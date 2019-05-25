#include <iostream>
#include <stdio.h>
using namespace std;
main(int argc, char *argv[])
{
	// This program uses throw, wrap one big try/catch here
	cout << "hello world!" << endl;
  //
  printf("try C printf function\r\n");
  cout <<"Number of arguments passed to the program:"<<argc<<endl;
  cout << "Executable file name: " << argv[0] <<endl;
  for (int i=1;i<argc;i++)
  {
    cout << argv[i] << endl;
  }
  return 0;
}
