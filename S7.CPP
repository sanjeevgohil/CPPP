//class template
#include<iostream.h>
#include<conio.h>
template <class T>

class Abc
{
	T a,b;
	public:
	Abc(T i,T j)
	{
		a=i;
		b=j;
	}
	void disp()
	{
		cout<<"\nValue of A is :"<<a;
		cout<<"\nValue of B is :"<<b;
	}
};
void main()
{
	clrscr();
	Abc <int>a1(10,20);
	Abc <float>a2(12.26,56.78);
	Abc <char>a3('A','a');

	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}