//constructor with default argument
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b;
	public:
	Abc(int i=10,int j=20)
	{
		a=i;
		b=j;
	}
	void disp()
	{
		cout<<"\nValue of A is:"<<a<<"     B is:"<<b;\
	}
};
void main()
{
	clrscr();
	Abc a1;
	Abc a2(20);
	Abc a3(100,200);

	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}
