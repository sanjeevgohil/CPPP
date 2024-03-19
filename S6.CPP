//function template
#include<iostream.h>
#include<conio.h>
template <class T>

void sum(T a,T b)
{
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;
}
void main()
{
	int a=10,b=20;
	float c=12.32,d=45.67;
	char e='A',f='a';
	clrscr();
	sum(a,b);
	sum(c,d);
	sum(e,f);
	getch();
}