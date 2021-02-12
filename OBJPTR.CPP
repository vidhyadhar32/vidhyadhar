#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class one
{
 public:
 void fun()
 {
 cout<<"one";
 }
};
class two:public one
{
public:
void fun()
{
cout<<"two";
}
};
int main()
{
clrscr();
one ob,*obpr;
two ob1;
obpr=&ob;
obpr->fun();
two ob2;
obpr=&ob2;
obpr->fun();
getch();
}


