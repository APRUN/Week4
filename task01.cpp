#include <iostream>
using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);
void subtraction(int number1, int number2);
void division(int number1, int number2);

main()

{
 int number1;
 int number2;
 char operation;
 while(true)
{
     cout<<"Enter 1st number: ";
     cin>>number1;
     cout<<"Enter 2nd number: ";
     cin>>number2;
     cout<<"Enter Operator: ";
     cin>>operation;


   if(operation=='+')
   {
    add(number1,number2);
    number1+number2;
    }

  if(operation=='-')
  {
    subtraction(number1,number2);
    number1-number2;
   }

   if(operation=='*')
  {
   product(number1,number2);
number1*number2;
}

if(operation=='/')
{
division(number1,number2);
number1/number2;
}
}}





   void add(int number1, int number2)
   {
     int addition;
     addition=number1+number2;
     cout<<"The sum is: " <<addition <<endl;
    }


  void product(int number1, int number2)
  {
     int mul;
     mul=number1*number2;
    cout<<"The product is: " <<mul <<endl;
  }
  void subtraction(int number1, int number2)
  {
    int subtract;
    subtract=number1-number2;
    cout<<"The anwser is: " <<subtract<<endl;
  }

  void division(int number1, int number2)
  {
   int div;
   div=number1/number2;
   cout<<"The anwser is: " <<div<<endl;
  }


