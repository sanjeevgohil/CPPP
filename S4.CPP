//command line argument(write)
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main(int argc,char *argv[])
{
	int rno;
	char nm;
	clrscr();

	ofstream out(argv[1]);

	cout<<"Enter Rno:";
	cin>>rno;
	cout<<"Name is :";
	cin>>nm;

	out<<endl<<rno;
	out<<endl<<nm;
	getch();
}

/*
     F9 to create EXE
     DOC SHELL
     cd..
     cd source
*/