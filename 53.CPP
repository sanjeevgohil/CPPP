//binary operator using friend function
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
		cout<<"\nValue Of A is:"<<a;
	}

	friend Abc operator +(Abc t1,Abc t2);
	friend Abc operator -(Abc t1,Abc t2);
};
Abc operator +(Abc t1,Abc t2)
{
	Abc temp;
	temp.a=t1.a+t2.a;
	return temp;
}
Abc operator -(Abc t1,Abc t2)
{
	Abc temp;
	temp.a=t1.a-t2.a;
	return temp;
}
void main()
{
	Abc a1,a2,a3,a4;
	clrscr();
	a1.input(30);
	a2.input(60);

	a3=a1+a2;
	a4=a1-a2;

	a1.output();
	a2.output();
	a3.output();
	a4.output();
	getch();
}