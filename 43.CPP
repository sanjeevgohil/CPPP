//parameterized constructor
#include<iostream.h>
#include<conio.h>
class Abc
{
	public:
	Abc()
	{
		cout<<"Welcome";
	}
	Abc(char str[])
	{
		cout<<str;
	}
};
void main()
{
	clrscr();
	Abc a1;
	Abc a2(" SANJEEV ");
	getch();
}
