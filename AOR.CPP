#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class rectangle
{
public:
float b,l,area;
void para()
{
b=4.5;
l=6.5;
area=b*l;
cout<<"area=="<<area;
}
};
void main()
{
clrscr();
rectangle obj;
obj.para();
getch();
}
