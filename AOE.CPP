#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int aoe(float r1,float r2);
int main()
{
clrscr();
aoe(3.9,4.3);
getch();
}
int aoe(float r1,float r2)
{
 float area=3.14*r1*r2 ;
 cout<<"area is:"<<area<<endl;
 }