#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void pop();
void main()
{
clrscr();
pop();
getch();
}
void pop()
{
float a=3.5,b=4.5;
float per=2*(a+b);
cout<<"perimeter is ="<<per<<endl;
}