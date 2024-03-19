//command line argument(read)
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main(int argc,char *argv[])
{
	int rno;
	char nm;
	clrscr();

	ifstream in(argv[1]);

	in>>rno;
	in>>nm;

	cout<<"\nRno is:"<<rno;
	cout<<"\nName is :"<<nm;

	getch();
}

/*
     F9 to create EXE
     DOC SHELL
     cd..
     cd source
*/