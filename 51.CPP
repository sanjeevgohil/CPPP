//binary operator overload
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
	void output()
	{
		cout<<"\nValue of A is:"<<a;
	}
	Abc operator +(Abc t1)
	{
		Abc temp;
		temp.a=a+t1.a;
		return temp;
	}
};
void main()
{
	Abc a1,a2,a3;
	clrscr();
	a1.input(10);
	a2.input(20);

	a3=a1+a1;
	a1.output();
	a2.output();
	a3.output();
	getch();
}
