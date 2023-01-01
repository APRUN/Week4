#include<iostream>
#include <windows.h>
using namespace std;

void printMenu();
void Aggregate(string, float, float, float);
void Aggregate2(string, float, float, float);
void compare(int, int, string, string);

main()
{
    int input;
    string name1;
    string name2;
    float mMarks1;
    float mMarks2;
    float iMarks1;
    float iMarks2;
    float eMarks1;
    float eMarks2;

     printMenu();
          cin >> input;

  
       

        if(input == 1)
        {
            cout<<"Enter your name: ";
            cin >> name1;
            cout<<name1 <<" ,Enter your matric marks: ";
            cin >> mMarks1;
            cout<<name1 <<" ,Enter your intermediate marks: ";
            cin >> iMarks1;
            cout<<name1 <<" ,Enter your ECAT marks: ";
            cin >> eMarks1;
        }
        if(input == 2)
        {
            cout<<"Enter your name: ";
            cin >> name2;
            cout<<name1 <<" ,Enter your matric marks: ";
            cin >> mMarks2;
            cout<<name1 <<" ,Enter your intermediate marks: ";
            cin >> iMarks2;
            cout<<name1 <<" ,Enter your ECAT marks: ";
            cin >> eMarks2;
        }
        if(input == 3)
        {
            Aggregate(name1, mMarks1, iMarks1, eMarks1);
        }
        if(input == 4)
        {
            Aggregate2(name2, mMarks2, iMarks2, eMarks2);
        }
        if(input == 5)
        {
              compare(eMarks1,eMarks2,name1,name2);
        }
    }


void printMenu()
{
    cout<<"***************************************"<<endl;
    cout<<"*                                     *"<<endl;
    cout<<"*                                     *"<<endl;
    cout<<"*           UET Lahore                *"<<endl;
    cout<<"*                                     *"<<endl;
    cout<<"*                                     *"<<endl;
    cout<<"***************************************"<<endl<<endl;
    cout<<"Welcome to UET Lahore"<<endl;
    cout<<"Press 1 to enter details of first student"<<endl;
    cout<<"Press 2 to enter details of second student"<<endl;
    cout<<"Press 3 to show aggregate of first student"<<endl;
    cout<<"Press 4 to show aggregate of second student"<<endl;
    cout<<"Press 5 to compare students"<<endl;    
}

void Aggregate(string name1, float mmarks, float inter, float emarks)
{
    float aggregate;
    aggregate = mmarks + inter + emarks;
    cout<<name1 <<" ,Your aggregate is: " << aggregate;
    system("pause");
}
void Aggregate2(string name2, float mmarks, float imarks, float emarks)
{  
 float aggregate;
    aggregate = ((mmarks/1100)*0.3) + ((imarks/1100)*0.4) + ((emarks/400)*0.3);
    cout<<name2 <<" ,Your aggregate is: " << aggregate;
    system("pause");
}

void compare(int eMarks1,int eMarks2,string name1,string name2)
{
 if( eMarks1>eMarks2)
 {
  
   cout<<name1 <<" ,your roll no. is 1. ";
 }
if(eMarks1<eMarks2)
{ 
  
   cout<<name2 <<" ,your roll no. is 1. ";
}

}