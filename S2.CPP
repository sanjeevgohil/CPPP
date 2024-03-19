//file handling (write)
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	int rno;
	char nm[20];
	clrscr();

	ofstream out("other.txt");

	cout<<"Enter Roll no:";
	cin>>rno;
	cout<<"Enter Name :";
	cin>>nm;

	out<<endl<<rno;
	out<<endl<<nm;
	getch();
}