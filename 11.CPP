#include<iostream.h>
#include<conio.h>

void main()
{
	int a=10;
	int *p;
	clrscr();

	p=&a;//call by reference(&)

	cout<<"\nValue of A is:"<<a<<"Value of *p is:"<<*p;

	*p=100;
	cout<<"\nValue of A is:"<<a<<"Value of *p is:"<<*p;
	getch();
}