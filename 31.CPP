//nesting of memeber function
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter number:";
		cin>>a;
		output();
	}
	void output(void)
	{
		cout<<"\nNumber is:"<<a;
	}
};
void main()
{
	Abc a1;
	a1.input();
	getch();
}