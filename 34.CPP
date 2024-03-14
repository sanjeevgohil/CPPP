//making outside function inline
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void input(void);
	void output(void);
};
inline void Abc::input(void)
{
	cout<<"\nEnter Number:";
	cin>>a;
}
inline void Abc::output(void)
{
	input();
	cout<<"\nNumber is:"<<a;
}
void main()
{
	Abc a1;
	clrscr();
	a1.output();
	getch();
}