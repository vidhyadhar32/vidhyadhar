#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class sphere
{
public:
float r,area;
void para()
{
r=6.5;
area=4*3.14*r*r;
cout<<"area=="<<area;
}
};
void main()
{
clrscr();
sphere obj;
obj.para();
getch();
}
