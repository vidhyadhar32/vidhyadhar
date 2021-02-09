#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class one{
public:
virtual void dis()=0;

};
class two:public one
{
public:
void dis()
{
}
};

int main()
{
clrscr();
two obj;
obj.dis();
getch();
}

