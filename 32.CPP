//nesting of member function
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Number :";
		cin>>a;
	}
	void output(void)
	{
		input();
		cout<<"Number is :"<<a;
	}
};
void main()
{
	Abc a1;
	a1.output();
	getch();
}