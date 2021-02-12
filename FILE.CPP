#include<fstream.h>
#include<conio.h>
#include<iostream.h>
    int main()
    {
    clrscr();
	char str[2000];
	fstream file_op("ALP.cpp",ios::in);
	while(file_op >> str)
	     cout<< str ;

	    file_op.close();
	getch();
	return 0;

    }