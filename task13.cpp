#include <iostream>
using namespace std;
void processing(int totaldays, int holidays,int minutes, int final);
main()
{
    int holidays,totaldays,minutes,final;

cout<<"Enter holidays: ";
cin>>holidays;
processing(totaldays,holidays,minutes,final);

if(final>1)
{
    cout<<"Tom will play.";
}
if(final<1)
{
    cout<<"Tom will run away";
}



}
void processing(int totaldays, int holidays,int minutes,int final)
{
totaldays=365-holidays;
minutes=(holidays*127+totaldays*63);
final=30000-minutes;
cout<<"Time: " <<final<<endl;
}