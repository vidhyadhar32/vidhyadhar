#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int pop(float a,float b);
int main()
{
clrscr();
pop(3.9,4.2);
getch();
}
int pop(float a,float b)
{
 float per=2*(a+b) ;
 cout<<"perimeter is:"<<per<<endl;
 }