//unformatted i/o opration(getline)
#include<iostream.h>
#include<conio.h>
void main()
{
	char nm[20];
	clrscr();
	cout<<"\nEnter Name:";
	cin.getline(nm,20);
	cout<<"\nName is :"<<nm;
	getch();
}