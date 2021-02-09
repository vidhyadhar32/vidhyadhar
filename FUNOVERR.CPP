#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class one{
public:
void dis()
{
cout<<"one";
}
};
class two:public one
{
public:
void dis()
{

cout<<"two";
}
};
int main()
{
clrscr();
two obj;
obj.dis();
getch();
}


