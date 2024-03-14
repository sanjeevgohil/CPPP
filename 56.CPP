//write a program to check which object is max from given 2 object
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
	int operator >(Abc t1)
	{
		int ans;
		if(a>t1.a)
		{
			ans=1;
		}
		else
		{
			ans=0;
		}
		return ans;
		//ans=a>t1.a?1:0;
	}
};
void main()
{
	Abc a1,a2;
	clrscr();

	a1.input(10);
	a2.input(20);

	if(a1>a2)
	{
		cout<<"\nObject A1 is MAX";
	}
	else
	{
		cout<<"\nObject A2 is MAX";
	}
	getch();
}
