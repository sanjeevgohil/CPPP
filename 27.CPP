//private class with argument
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
	int disp(void)
	{
		return a;
	}
};
void main()
{
	Abc a1;
	clrscr();
	a1.input(10);
	cout<<"\nvalue of A is:"<<a1.disp();
	getch();
}