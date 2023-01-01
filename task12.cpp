#include <iostream>
using namespace std;

void process(int, int, int);

main()
{
         system("cls");
  int numofred,numofwhite,numoftulips;
       cout<<"Enter number of red flowers: ";
       cin>>numofred;
       cout<<"Enter number of white roses:  ";
       cin>>numofwhite;
       cout<<"Enter  no of tulips: ";
       cin>>numoftulips;

	process(numofred, numofwhite, numoftulips);

}


void process(int rrose, int wrose, int tulips){
	float total;
	total = rrose*2.0 + wrose*4.1 + tulips*2.5;
	if(total<=200)
		{
		cout<<"The total amount is: " <<total;
		}
	if(total>200)
		{
		total=total*0.8;
		cout<<"The total amount after discount is: " <<total;
		}
}

