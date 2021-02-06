#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class circle
{
public:
float r,circum;
void para()
{
r=6.5;
circum=2*3.14*r;
cout<<"circumference=="<<circum;
}
};
void main()
{
clrscr();
circle obj;
obj.para();
getch();
}
