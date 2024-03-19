//file handling (read)
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	int rno;
	char nm[20];
	clrscr();

	ifstream in("other.txt");

	in>>rno;
	in>>nm;

	cout<<"\nRoll no:"<<rno;
	cout<<"\nName is:"<<nm;
	getch();
}