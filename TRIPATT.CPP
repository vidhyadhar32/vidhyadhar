#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int i,j,k;
int n=4,z=1;
for(i=1;i<=n;i++)
 {
  for(j=n-1;j>=i;j--)
  {
   cout<<" ";
   }
   for(k=1;k<=z;k++)
   {
   cout<<"*";
   }
   cout<<endl;
   z+=2;
   }
   getch();
   }