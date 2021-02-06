#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int poc();
int main()
{
 clrscr();
 poc();
 getch();
 }
 int poc()
 {
  float r=2.5;
  float per=2*3.14*r;
  cout<<"perimeter is:"<<per<<endl;
  return (per);
  }