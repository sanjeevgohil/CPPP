#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();
	cout<<"Enter First No:";
	cin>>no1;
	cout<<"\nEnter Second No:";
	cin>>no2;
	cout<<"\nEnter Third No:";
	cin>>no3;

	if(no1>no2 && no1>no3)
	{
		cout<<"\n First No Is MAX";
	}
	else if(no2>no1 && no2>no3)
	{
		cout<<"\n Second No Is MAX";
	}
	else if(no3>no1 && no3>no2)
	{
		cout<<"\n Third No Is MAX";
	}
	else
	{
		cout<<"\nMore Than One No Is MAX";
	}
	getch();
}
