#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class palindrome
{
public:
int pn, n1,n2,n3,num,store;
void input()
{
cout<<"enter the number==";
cin>>num;
store=num;
cout<<"store="<<store;
cout<<"\n";
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
pn=(n1*100)+(n2*10)+n3;
}
 void check()
 {
  if(pn==store)
  {
   cout<<"enter number is palindrome";
   }
   else
   {
    cout<<"it is not palindrome";
    }
    }
     };
     int main()
     {
      clrscr();
      palindrome obj;
      obj.input();
      obj.check();
      getch();
      return 0;
      }