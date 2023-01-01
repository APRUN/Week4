#include <iostream>
#include <windows.h>
using namespace std;
void isequal(int num, int num2);
main()
{
int num,num2;
  cout<<"Enter the 1st integer: ";
  cin>>num;
  cout<<"Enter 2nd integer: ";
  cin>>num2;
  isequal(num,num2);

}

void isequal(int num, int num2)
{

if(num==num2)
  {
      cout<<"True";
	}
if(num!=num2)
 {
     cout<<"False";
	}

}