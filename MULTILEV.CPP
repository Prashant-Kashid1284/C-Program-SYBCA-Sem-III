/*To calculate Addition of Two Numbers using Multilevel Inheritance(Function Overriding)*/
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
class intermediate:public base
{
	protected:
	int y;
	public:
	void get()
	{
		cout<<"Enter a Value of y"<<endl;
		cin>>y;
	}
};
class derived:public intermediate
{
	int z,t;
	public:
	void get()
	{
		cout<<"Enter a Value of z"<<endl;
		cin>>z;
	}
	void add()
	{
		t=x+y+z;
	}
	void put()
	{
		cout<<"Addition="<<t<<endl;
	}
};
void main()
{
	derived d;
	clrscr();
	d.base::get();			//Process of Inheritance
	d.intermediate::get();          //Process of Inheritance
	d.get();
	d.add();	                //Process of Inheritance
	d.put();
	getch();
}