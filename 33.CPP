//private member function
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	void input(void)
	{
		cout<<"\nEnter number:";
		cin>>a;
	}
	public:

	void output(void)
	{
		input();
		cout<<"\nNUmber is :"<<a;
	}
};
void main()
{
	Abc a1;
	clrscr();
	a1.output();
	getch();
}
