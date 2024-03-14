//type conversion(C to B -> operator)
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
		Abc(){}
		Abc(int i)
		{
			a=i;
			cout<<"\nValue of A is:"<<a;
		}
		operator int()   //(float/char)
		{
			return a;
		}
};
void main()
{
	int a; //(float/char)
	clrscr();
	Abc a1(10);
	a=a1;
	cout<<"\nValue of A is :"<<a;
	getch();
}