#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int aotr(float b1,float b2,float h);
int main()
{
clrscr();
aotr(3.9,4.2,6.2);
getch();
}
int aotr(float b1,float b2,float h)
{
 float area=((b1+b2)*h)/2 ;
 cout<<"area is:"<<area<<endl;
 }