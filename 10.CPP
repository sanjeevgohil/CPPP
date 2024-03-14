//scope resolution oprater
#include<iostream.h>
#include<conio.h>
int a=20;

void main()
{
	int a=10;
	clrscr();
	cout<<"\nLocal Value of A is:"<<a;
	cout<<"\nGlobal Value of A is:"<<::a;
	cout<<"\nTotal Is :"<<a+::a;
	getch();
}