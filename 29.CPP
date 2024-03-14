//nested class
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
		a2.output(a);
	}
	class Abc1
	{
		public:
		void output(int a)
		{
			cout<<"\nValue of A is:"<<a;
		}
	};
	Abc1 a2;
};
void main()
{
	Abc a1;
	clrscr();
	a1.input(10);
	a1.disp();
	getch();
}