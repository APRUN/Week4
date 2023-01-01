#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int,int);
void movement(int,int);
main()
{
    system("cls");
    int x,y;
    x=2;
    y=3;
cout<<"#################################" <<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#                               #"<<endl;
cout<<"#################################"<<endl;
while(true)
{
    if(x<=25)
    {
movement(x,y);
x=x+1;}
  if(x==25)
    {
movement(x,y);
x=x-1;}

}

}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void movement(int x, int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"O";
Sleep(1000);


}