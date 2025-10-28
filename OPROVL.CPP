/*To Overload Arithmetic Operators(+,-,*,/) using Operator Overloading*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Addition
{
	float x;
	public:
	void read(int y)
	{
		x=y;
	}
	Addition operator+(Addition b)
	{
		Addition c;
		c.x=x+b.x;
		return c;
	}
	Addition operator-(Addition b)
	{
		Addition c;
		c.x=x-b.x;
		return c;
	}
	Addition operator*(Addition b)
	{
		Addition c;
		c.x=x*b.x;
		return c;
	}
	Addition operator/(Addition b)
	{
		Addition c;
		c.x=x/b.x;
		return c;
	}
	void write()
	{
		cout<<setprecision(1)<<x<<endl;
	}
};
void main()
{
	Addition a,b,c;
	int p,q;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>p>>q;
	a.read(p);            //Member function
	b.read(q);            //Member function
	c=a+b; //c=a.operator+(b);  //Object as an argument of function(Normal Function)
	cout<<"Addition=";
	c.write();              //Member Function
	c=a-b; //c=a.operator-(b);  //Object as an argument of function(Normal Function)
	cout<<"Subtraction=";
	c.write();              //Member Function
	c=a.operator*(b); //c=a*b;  //Object as an argument of function(Normal Function)
	cout<<"Multiplication=";
	c.write();              //Member Function
	c=a.operator/(b); //c=a/b;  //Object as an argument of function(Normal Function)
	cout<<"Division=";
	c.write();              //Member Function
	getch();
}