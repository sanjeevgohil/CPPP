//class template
#include<iostream.h>
#include<conio.h>
template <class T1,class T2>

class Abc
{
	T1 a;
	T2 b;
	public:
	Abc(T1 i,T2 j)
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
	Abc <int,int>a1(10,20);
	Abc <float,float>a2(12.26,56.78);
	Abc <char,char>a3('A','a');

	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}