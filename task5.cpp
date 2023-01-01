#include <iostream>
#include <windows.h>
using namespace std;
void printk();
void printh();
void printa();
void printl();
void printi();
void printl2();
void gotoxy(int,int);
main()
{

printk();
printh();
printa();
printl();
printi();
printl2();


}
void printk()
{
    int x=3;
    int y=3;
gotoxy(x,y);
cout<<"##               ##";
gotoxy(x,y++);
cout<<"##             ##";
gotoxy(x,y++);
cout<<"##          ##";
gotoxy(x,y++);
cout<<"##        ##";
gotoxy(x,y++);
cout<<"##     ##";
gotoxy(x,y++);
cout<<"## ##";
gotoxy(x,y++);
cout<<"##   ##";
gotoxy(x,y++);
cout<<"##     ##";
gotoxy(x,y++);
cout<<"##       ##";
gotoxy(x,y++) ;
cout<<"##         ##";
gotoxy(x,y++);
cout<<"##          ##";
gotoxy(x,y++);
cout<<"##            ##";
}
void printh()
{
    int x=20;
    int y=3;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
gotoxy(x,y++);
cout<<"#################"<<endl;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
gotoxy(x,y++);
cout<<"##             ##"<<endl;
}

void printa()
{
    int x=40;
    int y=3;
gotoxy(x,y++);
cout<<"    ##      "<<endl;
gotoxy(x,y++);
cout<<"  ##  ##    "<<endl;
gotoxy(x,y++);
cout<<" ##    ##   "<<endl;
gotoxy(x,y++);
cout<<" ##    ##   "<<endl;
gotoxy(x,y++);
cout<<" ########   "<<endl;
gotoxy(x,y++);
cout<<" ##    ##   "<<endl;
gotoxy(x,y++);
cout<<" ##    ##   "<<endl;

}

void printl()

{
    int x=55;
    int y=3;
gotoxy(x,y++);
cout<<"#######";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"#######";

}

void printi()
{
    int x=65;
    int y=3;
    gotoxy(x,y);
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
void gotoxy(int x, int y)
{

    
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printl2()

{
    int x=77;
    int y=3;
gotoxy(x,y++);
cout<<"#######";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"  ###  ";
gotoxy(x,y++);
cout<<"#######";

}