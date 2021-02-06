#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class parallelogram
{
public:
float b,h,area;
void para()
{
b=6.5;
h=7.5;
area=b*h;
cout<<"area=="<<area;
}
};
void main()
{
clrscr();
parallelogram obj;
obj.para();
getch();
}
