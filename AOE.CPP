#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class ellipse
{
public:
float r1,r2,area;
void para()
{
r1=6.5;
r2=5.5;
area=3.14*r1*r2;
cout<<"area=="<<area;
}
};
void main()
{
clrscr();
ellipse obj;
obj.para();
getch();
}
