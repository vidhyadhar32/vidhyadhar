#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class circle
{
public:
float r,per;
void para()
{
r=6.5;
per=2*3.14*r;
cout<<"perimeter=="<<per;
}
};
void main()
{
clrscr();
circle obj;
obj.para();
getch();
}
