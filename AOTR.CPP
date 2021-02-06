#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class trapezoid
{
public:
float b1,b2,area,h;
void para()
{
b1=6.5;
b2=7.5;
h=5.5;
area=((b1+b2)*h)/2;
cout<<"area=="<<area;
}
};
void main()
{
clrscr();
trapezoid obj;
obj.para();
getch();
}
