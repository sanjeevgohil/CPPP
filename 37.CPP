//static data member
#include<iostream.h>
#include<conio.h>
class Abc
{
	static int a;
	public:
	void input(int i)
	{
		a=i;
	}
	void output()
	{
		cout<<"\nValue of A is:"<<a;
	}
};
int Abc::a=0;
void main()
{
	Abc a1,a2;
	clrscr();
	a1.input(10);
	a2.output();
	a1.input(200);
	a2.output();
	getch();
}
