#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class one{
public:
 void dis()
{
cout<<"one";
}} ;

class two:public one
{
public:
void dis()
{

cout<<"\n";
cout<<"two";
}
};
void main()
{
clrscr();
one ob1,*obpr;
obpr=&ob1;
obpr->dis();
two ob2;
obpr=&ob2;
obpr->dis();
getch();
}



