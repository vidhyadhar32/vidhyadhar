#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class cube
{
public:
float volume,a;
void para()
{
a=3.4;
volume=a*a*a;
cout<<"volume=="<<volume;
}
};
void main()
{
clrscr();
cube obj;
obj.para();
getch();
}
