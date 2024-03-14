//array within class
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a[10];
	public:
	void input(void)
	{
		int i;
		for(i=0;i<=9;i++)
		{
			cout<<"\nEnter Number:";
			cin>>a[i];
		}
	}
	void output(void)
	{
		int i;
		for(i=0;i<=9;i++)
		{
			cout<<"\nNumber is:"<<a[i];
		}
	}
};
void main()
{
	Abc a1;
	clrscr();
	a1.input();
	a1.output();
	getch();
}
