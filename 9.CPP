#include<iostream.h>
#include<conio.h>
#include"udf.h"
void main()
{
	int a=10,b=20,c=0;
	clrscr();

	c=sum(a,b);

	cout<<"\nTotal Is:"<<c;
	getch();
}