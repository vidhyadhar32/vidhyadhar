#include<stdio.h>
#include<conio.h>
void test(int a);
void main()
{
int c;
c=1;
clrscr();
printf("c=%d",c);
test(c);
printf("c=%d",c);
getch();
}
void test(int a)
{
a=a+10;
printf("a=%d",a);
}