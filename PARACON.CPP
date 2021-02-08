#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class add{
int a,b,c;
public:
add(int x,int y)
{
a=x;
b=y;
c=a+b;
cout<<"c is:"<<c<<endl;
}};
int main()
{
clrscr();
add a1(5,7);
getch();
}