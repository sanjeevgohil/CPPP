//copy constructor
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	Abc()//non parameterized
	{
		a=0;
	}
	Abc(int i)//parameterized
	{
		a=i;
	}
	Abc(Abc &t1)//copy constructor
	{
		a=t1.a;
	}
	void output()
	{
		cout<<"\nValue of A is :"<<a;
	}
};
void main()
{
	clrscr();
	Abc a1;
	Abc a2(50);

	Abc a3=a2;//copy constructor

	a1.output();
	a2.output();
	a3.output();
	getch();
}
