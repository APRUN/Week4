#include <iostream>
using namespace std;
void condition(string countryname,int pofticket);
main()
{
    string countryname;
    int pofticket; 

 cout<<"Enter countr's name: ";
cin>>countryname;
 cout<<"Enter price of ticket: ";
 cin>>pofticket;
 condition(countryname, pofticket);

}

void condition(string countryname,int pofticket)
{
    
if(countryname=="pakistan")
{
    cout<<"The total price after discount is" <<pofticket*0.95;
}
if(countryname== "ireland")
{
cout<<"The total price after discount is" <<pofticket*0.90;
}
if(countryname=="india")
{
    cout<<"The total price after discount is" <<pofticket*0.80;
}
if(countryname=="england")
{
    cout<<"The total price after discount is" <<pofticket*0.70;
    }
    if(countryname=="canada")
    {
        cout<<"The total price after discount is" <<pofticket*0.55;
    }


}



