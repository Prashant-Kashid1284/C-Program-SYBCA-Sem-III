/*To Overload Decrement(--Pre & Post--) using Operator Overloading*/
#include<iostream.h>
#include<conio.h>
class Decrement
{
	int x;
	public:
	void input(int p)
	{
		x=p;
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
	Decrement i;
	int p;
	clrscr();
	cout<<"Enter Any Number"<<endl;
	cin>>p;			//p=5
	i.input(p);
	--i;     //i.operator--();
	i.output();         //Value of x=4
	i--;  	//i.operator--(int);
	i.output();         //Value of x=3
	getch();
}