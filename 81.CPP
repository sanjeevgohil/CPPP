//unformatted i/o operation(put)
#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=65;i<=90;i++)
	{
		cout<<i<<"->";
		cout.put(i);
		cout<<"\t";
	}
	getch();
}