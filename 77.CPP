//pointer to derived class
#include<iostream.h>
#include<conio.h>
class Abc
{
	public:
		int a;
		void disp(void)
		{
			cout<<"\nValue of A is:"<<a;
		}
};
class Xyz : public Abc
{
	public:
		int x;
		void disp(void)
		{
			cout<<"\nValue of X is :"<<x;
			cout<<"\nValue of A is :"<<a;
		}
};
void main()
{
	clrscr();

	Abc *a1;
	Abc a2;
	a1=&a2;

	a1->a=10;
	a1->disp();

	Xyz *x1;
	Xyz x2;
	x1=&x2;
	x1->a=20;
	x1->x=30;
	x1->disp();
	getch();
}


