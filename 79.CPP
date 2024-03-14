//pure virtual function
#include<iostream.h>
#include<conio.h>
class Abc
{
	protected:
		int a;
	public:
		Abc(int i)
		{
			a=i;
		}
		virtual void output(void)=0;
};
class Xyz : public Abc
{
	protected:
		int x;
	public:
		Xyz(int i,int j):Abc()
		{
			x=i;
		}
		void output(void)
		{
			cout<<"\nValue of A is:"<<a;
			cout<<"\nValue of X is:"<<x;
		}
};
void main()
{
	clrscr();
	Xyz = x1 (10,20);

	x1.output();
	getch();
}