#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int i,j,num=65;
char k;
clrscr();
for(i=4;i>=1;i--)
{
 for(j=1;j<=i-1;j++)
 {
 cout<<" ";
 }
 for(k=65;k<=num;k++)
 {
 cout<<k;
 }
 cout<<endl;
 num+=2;
 }
 getch();
 }