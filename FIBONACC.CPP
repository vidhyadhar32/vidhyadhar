
//Fibonacci using class and objects
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class fibonacci
{
public:
 int i,n1,n2,n3,n;
 void  fib();



 };
 void fibonacci::fib()


{
 cout<<"enter the range:";
 cin>>n;
 n1=0;
 n2=1;

 for(i=0;i<n;i++)
 {
 n3=n1+n2;
 cout<<n3;
 n1=n2;
 n2=n3;

 }
 }

 int main()
 {

   fibonacci obj;
   clrscr();
   obj.fib();
   getch();
   return 0;
   }
