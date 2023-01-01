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
gotoxy(3,4);
cout<<"P";
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
