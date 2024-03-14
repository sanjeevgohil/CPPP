//unformatted i/o operation(get)
#include<iostream.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	cin.get(ch);

	while(ch != '\n')
	{
		cout<<ch;
		cin.get(ch);
	}
	getch();
}