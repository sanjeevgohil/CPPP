//private class
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void input(int i)
	{
		a=i;
	}
	void disp(void)
	{
		cout<<"\nValue of A is :"<<a;
	}
};
void main()
{
	Abc a1;
	clrscr();
	a1.input(10);
	a1.disp();
	getch();
}