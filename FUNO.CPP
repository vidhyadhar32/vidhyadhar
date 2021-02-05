//program of function overloading using class and objects

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class area
{
 public:
 int c, x,y;

 void fun(int x,int y)
 {

  c=x+y;
  cout<<"c=="<<c;

  }
  };
  void main()
  {
  clrscr();
  area obj;
  obj.fun(2,4);
  getch();
  }
