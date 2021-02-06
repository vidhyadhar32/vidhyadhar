#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int aotr();
int main()
{
 clrscr();
 aotr();
 getch();
 }
 int aotr()
 {
  float b1=2.5,b2=3.5,h=3.2;
  float area=((b1+b2)*h)/2;
  cout<<"area is:"<<area<<endl;
  return (area);
  }