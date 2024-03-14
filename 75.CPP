//pointer to object
#include<iostream.h>
#include<conio.h>
class Abc
{
	public:
		void disp(void)
		{
			cout<<"\nPointer To Object Example";
		}
};
void main()
{
	clrscr();
	Abc *a1;
	a1->disp();
	getch();
}