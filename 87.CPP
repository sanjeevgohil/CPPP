//formatted i/o operation(set & unset)
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout.precision(2);
	cout.setf(ios::showpoint);//setf(ios::showpos);
	cout<<50.55;
	cout<<endl<<80.40;
	cout.unsetf(ios::showpoint);
	cout<<endl<<10.00;
	getch();
}