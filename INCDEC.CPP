/*To Overload Increment & Decrement(Pre & Post) using Operator Overloading*/
#include<iostream.h>
#include<conio.h>
class IncDecrement
{
	int x;
	public:
	void input(int p)
	{
		x=p;
	}
	void operator++()
	{
		++x;
	}
	void operator++(int)
	{
		x++;
	}
	void operator--()
	{
		--x;
	}
	void operator--(int)
	{
		x--;
	}
	void output()
	{
		cout<<"Value of x="<<x<<endl;
	}
};
void main()
{
	IncDecrement i;
	int p;
	clrscr();
	cout<<"Enter Any Number"<<endl;
	cin>>p;			//p=5
	i.input(p);
	++i;     //i.operator++();
	i.output();         //Value of x=6
	i++;  	//i.operator++(int);
	i.output();         //Value of x=7
	--i;     //i.operator--();
	i.output();         //Value of x=6
	i--;  	//i.operator--(int);
	i.output();         //Value of x=5
	getch();
}