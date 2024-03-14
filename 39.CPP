//object as function argument
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Value of A:";
		cin>>a;
	}
	void setval(Abc t1)
	{
		a=t1.a+10;
	}
	void output(void)
	{
		cout<<"\nValue of A is:"<<a;
	}
};
void main()
{
	Abc a1,a2;
	clrscr();
	a1.input();
	a2.setval(a1);
	a1.output();
	a2.output();
	getch();
}