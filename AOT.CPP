#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class triangle
{
public:
float b,h,area;
void para()
{
b=4.5;
h=6.5;
area=0.5*b*h;
cout<<"area=="<<area;
}
};
void main()
{
clrscr();
triangle obj;
obj.para();
getch();
}
