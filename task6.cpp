#include <iostream>
#include <windows.h>
using namespace std;
void printa(int x,int y);
void printw(int x, int y);
void printi(int x, int y);
void prints(int x, int y);
void gotoxy(int, int);
main()
{
    int x,y;
x=5;
y=10;
gotoxy(x,y);
printa(x,y);


printw(5,16);
printa(5,25);
printi(5,32);
prints(5,39);
}
void printa(int x, int y)
{

cout<<"    ##      ";
gotoxy(x,y++);
cout<<"  ##  ##    ";
gotoxy(x,y++);
cout<<" ##    ##   ";
gotoxy(x,y++);
cout<<" ##    ##   ";
gotoxy(x,y++);
cout<<" ########   ";
gotoxy(x,y++);
cout<<" ##    ##   ";
gotoxy(x,y++);
cout<<" ##    ##   ";

}

void printw(int x, int y)
{
gotoxy(x,y++);
cout<<"  ####              #####";
gotoxy(x,y++);
cout<<"   ####            #### ";
gotoxy(x,y++);
cout<<"    ####   ####   ####  ";
gotoxy(x,y++);
cout<<"     ###    ##    ###   ";
gotoxy(x,y++);
cout<<"       ##   ##    ##    ";
gotoxy(x,y++);
cout<<"        #   ##   #      ";
gotoxy(x,y++);
cout<<"          V    V        ";

} 

void printi(int x, int y)
{

gotoxy(x,y++);
cout<<"    @@     ";
gotoxy(x,y++);
cout<<"           ";
gotoxy(x,y++);
cout<<"   ###     ";
gotoxy(x,y++);
cout<<"   ###     ";
gotoxy(x,y++);
cout<<"   ###     ";
gotoxy(x,y++);
cout<<"   ###     ";
gotoxy(x,y++);
cout<<"  #####    ";


}
 
 void prints(int x, int y)
 {
  gotoxy(x,y++);  
cout<<"   @@@@@@@@    ";
gotoxy(x,y++);
cout<<" @@          @  ";
gotoxy(x,y++);
cout<<"  @@             ";
gotoxy(x,y++);
cout<<"    @@@@           ";
gotoxy(x,y++);
cout<<"          @@     ";
gotoxy(x,y++);
cout<<"            @@     ";
gotoxy(x,y++);
cout<<"          @@   ";
gotoxy(x,y++);
cout<<"   @ @@ @@    " ;   

 }

 void gotoxy(int x, int y)
{

    
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

