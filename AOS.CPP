#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class square
{
public:
float l,area;
void para()
{
l=6.5;
area=l*l;
cout<<"area=="<<area;
}
};
void main()
{
clrscr();
square obj;
obj.para();
getch();
}
