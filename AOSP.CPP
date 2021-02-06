#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int aosp(float r);
int main()
{
clrscr();
aosp(3.9);
getch();
}
int aosp(float r)
{
 float area=4*3.14*r*r ;
 cout<<"area is:"<<area<<endl;
 }