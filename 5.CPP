#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2,ch,ans;
	clrscr();
	cout<<"Enter First No:";
	cin>>no1;
	cout<<"Enter Second No:";
	cin>>no2;

	cout<<"\n\n\tChoose Any One";
	cout<<"\n1.ADDTION";
	cout<<"\n2.SUBTRACTION";
	cout<<"\n3.MULTIPLICATION";
	cout<<"\n4.DIVISION";
	cout<<"\n\t\tENter Your Choice:";
	cin>>ch;

	switch(ch)
	{
		case 1:
			ans=no1+no2;
			break;
		case 2:
			ans=no1-no2;
			break;
		case 3:
			ans=no1*no2;
			break;
		case 4:
			ans=no1/no2;
			break;
		default:
			cout<<"\nWrong Choice....Try Again....";
	}

	cout<<"\nANSWER IS :"<<ans;
	getch();
}