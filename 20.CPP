//default argument
#include<iostream.h>
#include<conio.h>
inline int sum(int a=100,int b=200)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
	int a,b,c;
	clrscr();
	a=10;
	b=20;

	c=sum(a,b);
	cout<<"\nTotal is :"<<c;

	c=sum(a);
	cout<<"\nTotal is :"<<c;

	c=sum();
	cout<<"\nTotal is :"<<c;
	getch();
}