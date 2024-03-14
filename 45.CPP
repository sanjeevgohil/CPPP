//explicite constructor
#include<iostream.h>
#include<conio.h>
class Abc
{
	public:
	Abc();
}
Abc::Abc()
{
	cout<<"\nWel-Come";
}
void main()
{
	clrscr();
	Abc a1;
	getch();
}