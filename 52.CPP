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
	Abc operator -(Abc t1)
	{
		Abc temp;
		temp.a=a-t1.a;
		return temp;
	}
	Abc operator *(Abc t1)
	{
		Abc temp;
		temp.a=a*t1.a;
		return temp;
	}
	Abc operator /(Abc t1)
	{
		Abc temp;
		temp.a=a/t1.a;
		return temp;
	}
};
void main()
{
	Abc a1,a2,a3,a4,a5,a6;
	clrscr();

	a1.input(30);
	a2.input(20);

	a3=a1+a2;
	a4=a1-a2;
	a5=a1*a2;
	a6=a1/a2;

	a1.output();
	a2.output();
	a3.output();
	a4.output();
	a5.output();
	a6.output();
	getch();
}