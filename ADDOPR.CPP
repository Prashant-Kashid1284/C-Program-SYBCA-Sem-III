/*To Calculate Addition of Two Numbers using Operator Overloading*/
#include<iostream.h>
#include<conio.h>
class Addition
{
	int x;
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
	void write()
	{
		cout<<x<<endl;
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
	getch();
}