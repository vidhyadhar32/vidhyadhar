#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class add{
int a,b;

public:

 static int c;
void fun()
{
a=10;b=6;
c=a+b;
cout<<"c is:"<<c<<endl;
}
};
 int add:: c;
void main()
{
clrscr();
add a1;
a1.fun();
getch();
}