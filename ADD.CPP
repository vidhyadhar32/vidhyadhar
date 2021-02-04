//Function overloading
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class addition
{
public:
 int a,b,c;
 void  add()
{

 a=5,b=4;
 c=a+b;
 cout<<"c="<<c<<endl;
 }};
 int main()
 {
 clrscr();
   addition obj;
   obj.add();
   getch();
   }
