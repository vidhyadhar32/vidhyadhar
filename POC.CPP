#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int poc(float r);
int main()
{
clrscr();
poc(3.9);
getch();
}
int poc(float r)
{
 float per=3.14*2*r ;
 cout<<"perimeter is:"<<per<<endl;
 }