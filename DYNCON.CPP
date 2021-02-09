#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class add{
int *p,*q,*r;
public:
add()
{
p=new int;
*p=10;
q=new int;
*q=20;
r=new int;
*r=*p + *q;
cout<<"*r="<<*r<<endl;
}
};
int main()
{
clrscr();
add obj;
getch();
}f