//unformatted i/o operator(write function)
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *nm="sanjeev gohil";
	int i,l;
	clrscr();

	l=strlen(nm);

	for(i=1;i<=l;i++)
	{
		cout.write(nm,i);
		cout<<endl;
	}
	getch();
}