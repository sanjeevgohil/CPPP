//virtual function
#include<iostream.h>
#include<conio.h>
class Abc
{
	protected:
		int a;
	public:
		Abc (int i)
		{
			a=i;
		}
		virtual int output(void)
		{
			return a;
		}
};
class Xyz
{
	protected:
		int x;
	public:
		Xyz(int i,int j) : Abc(i)
		{
			x=j;
		}
		int output(void)
		{
			return x;
		}
};
void main()
{
	clrscr();
	Abc *a1;
	a1=new Abc(10);

	cout<<"\nValue of A is:"<<a1->output();

	a1=new xyz(100,200);

	cout<<"\nValue of X is:"<<a1->output();

	getch();
}