//formatted i/o operation(precision)
#include<iostream.h>
#include<conio.h>
void main()
{
	double a=123.45678,b=456.7689;
	clrscr();
	cout.precision(2);
	cout<<a;
	cout<<endl<<b;
	getch();
}