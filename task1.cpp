#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int,int);
main()
{
cout<<"Test";
gotoxy(5,6);
cout<<"My name is Oggy";
}
void gotoxy(int x,int y)
{

 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}