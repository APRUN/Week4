#include <iostream>
using namespace std;
void showresult(int marks);
main()
{
while(true)
{int marks;
cin>>marks;   
showresult(marks);
}
}
void showresult(int marks)
{
   if(marks<50)
{
cout<<"Failed once again";
}
if(marks>50)
{
   cout<<"Congrtulations! you have passed.";
}
if(marks==50)
{
cout<<"Work Hard";
}


}
