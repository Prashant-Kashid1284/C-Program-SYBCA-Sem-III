/*To calculate Addition of Two Numbers using Inheritance(Function Overriding)*/
#include<iostream.h>
#include<conio.h>
class base
{
	protected:
	int x;
	public:
	void get()
	{
		cout<<"Enter a Value of x"<<endl;
		cin>>x;
	}
};
class derived:public base
{
	int y,z;
	public:
	void get()
	{
		cout<<"Enter a Value of y"<<endl;
		cin>>y;
	}
	void add()
	{
		z=x+y;
	}
	void put()
	{
		cout<<"Addition="<<z<<endl;
	}
};
void main()
{
	derived d;
	clrscr();
	d.get();	//Process of Inheritance(Function Overriding)
	d.get();
	d.add();	//Process of Inheritance
	d.put();
	getch();
}
