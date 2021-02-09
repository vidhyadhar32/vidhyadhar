#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>

class student
{
public:
int id;
char name[10],address[10];
void set()
{
cout<<"enter name:\n";
cin>>name;
cout<<"enter address:\n";
cin>>address;
cout<<"enter id:\n";
cin>>id;
}
void dis()
{
cout<<"\n"<<name;
cout<<"\n"<<address;
cout<<"\n"<<id;
}
};

class exam:public student
{
 public:
 int ppr1,ppr2;
 void setppr()
 {
 cout<<" \n enter marks of paper 1 \n" ;
 cin>>ppr1;
 cout<<"enter marks of paper 2 \n";
 cin>>ppr2;
 }
 void disppr()
 {
 cout<<"\n"<<ppr1;
 cout<<"\n"<<ppr2;
 }
 };

class sport{
 public:
 int spt_marks;
void setmark()
{
cout<<" \n enter marks of sports \n";
cin>>spt_marks;
}
void dismark()
{
cout<<"\n"<<spt_marks;
}
};

class result:public exam ,public sport
{
public:
int totalmark;
void totalmark1()
{
totalmark=ppr1+ppr2+spt_marks;
cout<<"\n"<<totalmark;
}
};

int main()
{
clrscr();
result obj;
obj.set();
obj.dis();
obj.setppr();
obj.disppr();
obj.setmark();
obj.dismark();
obj.totalmark1();
getch();
}



