//nested class
#include<iostream.h>
#include<Conio.h>
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
			a3.output1(a);
		}
		class Abc2
		{
			public:
			void output1(int a)
			{
				cout<<"\nValue of A is :"<<a;
			}
		};
		Abc2 a3;
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