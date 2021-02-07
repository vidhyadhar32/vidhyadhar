//Function using outside the class
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class shape{
public:
void aoc();
void aot();

};
void shape:: aoc()
{
float r=3.5;
float area= 3.14*r*r;
cout<<"area of circle is:"<<area<<endl;
}
void shape::aot()
{
float b=7.2,h=6.2;
float area=(b*h)/2;
cout<<"area of triangle is:"<<area<<endl;
}
int main()
{
clrscr();
shape obj;
obj.aoc();
obj.aot();
getch();
}
