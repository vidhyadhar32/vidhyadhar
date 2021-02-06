#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class parallelogram
{
public:
float a,b,per;
void para()
{
a=6.5;
b=7.4;
per=2*(a+b);
cout<<"perimeter=="<<per;
}
};
void main()
{
clrscr();
parallelogram obj;
obj.para();
getch();
}
