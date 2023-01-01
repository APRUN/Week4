#include<iostream>
using namespace std;
void challan(int speed);
main()
{
int speed;
cout<<"Enter Speed: ";
cin>>speed;
challan(speed);


}
void challan(int speed)
{
if(speed<=100)
  	{
             cout<<"You can move";
 		}
if(speed>100)
	{
                  cout<<"you will be challaned";
		}
 
}

