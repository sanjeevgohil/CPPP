#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2;
	clrscr();
	cout<<"Enter First No :";
	cin>>no1;
	cout<<"Enter Second No :";
	cin>>no2;

	if(no1>no2)
	{
		cout<<"\nFirst No Is MAX";
	}
	else
	{
		cout<<"\nSecond No Is MAX";
	}
	getch();
}