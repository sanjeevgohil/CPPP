//local class
#include<iostream.h>
#include<conio.h>
void local(void)
{
	class Abc
	{
		int a;
		public:
		void input(int i)
		{
			a=i;
		}
		void output(void)
		{
			cout<<"\nValue of A is :"<<a;
		}
	};
	Abc a1;
	a1.input(10);
	a1.output();
}
void main()
{
	clrscr();
	local();
	getch();
}