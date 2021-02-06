#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int voc(float a);
int main()
{
clrscr();
voc(3.9);
getch();
}
int voc(float a)
{
 float vol=a*a*a ;
 cout<<"volume is:"<<vol<<endl;
 }