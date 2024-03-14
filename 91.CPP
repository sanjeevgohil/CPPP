//udf manipulator
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream &right(ostream &out)
{
	cout<<"---->";
	return out;
}
ostream &left(ostream &out)