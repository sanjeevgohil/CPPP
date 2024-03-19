//udf manipulators
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream &right(ostream &out)
{
	cout<<"<------";
	return out;
}
ostream &left(ostream &out)
{
	cout<<"------->";
	return out;
}
void main()
{
	clrscr();

	cout<<endl<<"String"<<right<<"ABCD"<<left;

	getch();
}