//formatted i/o operation(fill)
#include<iostream.h>
#include<conio.h>
void main()
{
	double a=123.456852,b=456.7689;
	clrscr();
	cout.precision(2);
	cout.fill('*');
	cout.width(8);
	cout<<a;
	cout.width(9);
	cout<<endl<<b;
	getch();
}