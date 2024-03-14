//dynamic constructor(pointer)
#include<iostream.h>
#include<conio.h>
class Abc
{
	int *a;
	int size;
	public:
	Abc(int s)
	{
		size=s;
		a=new int[size];
	}
	void input()
	{
		int i;
		for(i=0;i<size;i++)
		{
			cout<<"\nEnter"<<i+1<<"Number :";
			cin>>a[i];
		}
	}
	void disp()
	{
		int i;
		for(i=0;i<size;i++)
		{
			cout<<"\n"<<i+1<<"Number is:"<<a[i];
		}
	}
};
void main()
{
	clrscr();
	Abc a1(5);
	Abc a2(8);
	Abc a3(3);

	a1.input();
	a2.input();
	a3.input();

	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}

