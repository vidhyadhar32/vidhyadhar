#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class square
{
public:
float a,per;
void para()
{
a=6.5;
per=4*a;
cout<<"perimeter=="<<per;
}
};
void main()
{
clrscr();
square obj;
obj.para();
getch();
}
