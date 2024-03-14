//call by value
#include<iostream.h>
#include<conio.h>
void swap(int,int);  //function prototype

void main()
{
	int a=10,b=20;
	clrscr();
	cout<<"Before Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;

	swap(a,b); //function calling(a&b are actual argument)

	cout<<"\n\nAfter Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;
	getch();
}

void swap(int a,int b)//function defination(a&b are formal argument)
{
	int c;
	c=a;
	a=b;
	b=c;
}