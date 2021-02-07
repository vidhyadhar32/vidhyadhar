#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{

	char name[5],surname[10],address[10];
	int id;
	public:
	void bio();
	void display();
};
void student:: bio()
{
	cout<<"enter the name of student= \n";
	cin>>name;
	cout<<" enter the surname of student= \n";
	cin>>surname;
	cout<<" enter the address of the student= \n";
	cin>>address;
	cout<<" enter the id of the student= \n";
	cin>>id;

}
void student::display()
{
	cout<<"\n"<<name;
	cout<<"\n"<<surname;
	cout<<"\n"<<address;
	cout<<"\n"<<id;
}
void main()
{
	clrscr();
	student s;
	s.bio();
	s.display();
	getch();
}
