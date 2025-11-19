/*To calculate Addition of Three Numbers using virtual base Class(Function Overriding)*/
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
class derived1:virtual public base
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
class derived2:public virtual base
{
	protected:
	int z;
	public:
	void get()
	{
		cout<<"Enter a Value of z"<<endl;
		cin>>z;
	}
};
class derived:public derived1,public derived2
{
	int t;
	public:
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
	d.base::get();	      //Process of Inheritance
	d.derived1::get();      	 	//Process of Inheritance
	d.derived2::get();       	//Process of Inheritance
	d.add();	      //Process of Inheritance
	d.put();
	getch();
}