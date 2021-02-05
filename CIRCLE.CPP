#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class circle
{
 public:
 int r;
 float area;

 void fun()
 {
 r=4;
  area=3.14*r*r;
  cout<<"area=" <<area;

  }
  };
  void main()
  {
  clrscr();
  circle obj;
  obj.fun();
  getch();
  }
