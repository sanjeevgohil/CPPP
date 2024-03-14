//implicite & explicite constructor
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Abc
{
	int rno;
	char nm[20];
	public:
	Abc(){}
	Abc(int r,char n[])
	{
		rno=r;
		strcpy(nm,n);
	}
	void disp()
	{
		cout<<"\nRoll NO is :"<<rno;
		cout<<"\nName is :"<<nm;
	}
};
void main()
{
	clrscr();
	Abc a1(1,"Abc");//implicite constructor
	Abc a2=Abc(2,"XYZ");//explicite constructor

	a1.disp();
	a2.disp();

	getch();
}