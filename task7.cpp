#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int,int);
void move(int , int);
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
gotoxy(x,y);
while(true)
{

move(x, y);
y++;
}
}

void gotoxy(int x, int y)
{

    
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void move(int x, int y)
{
    gotoxy(x,y-1);
    cout<<" ";
    gotoxy(x,y);
    cout<<"O";
    Sleep(500);



}

