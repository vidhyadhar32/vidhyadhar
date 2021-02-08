#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class add{
int a,b,c;
public:
add();
};
add::add()
{
a=10;
b=16;
c=a+b;
cout<<"c is:"<<c<<endl;
}
int main()
{
clrscr();
add a1,a2;
getch();
}