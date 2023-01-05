#include <iostream>
using namespace std;
void iseven(int number);
main()
{
int number;
while(true)
{
cout<<"Enter the number: ";
cin>>number;
iseven(number);
}

}
void iseven(int number)
{
  if(number%2==0)
   {cout<<"It is even"; 
}
  if(number%2>0)
{cout<<"It is not even";
}
}