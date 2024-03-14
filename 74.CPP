//member function (like type conversion
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void setval(int i)
	{
		a=i;
	}
	int getval(void)
	{
		return a;
	}
};
void main()
{
	clrscr();
	int a=10,b;
	Abc a1;
	a1.setval(a);
	b=a1.getval();

	cout<<"\nvalue of A is :"<<a;
	cout<<"\nvalue of B is :"<<b;
	getch();
}