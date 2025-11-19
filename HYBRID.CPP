/*To calculate Addition of Three Numbers using Hybrid Inheritance*/
#include<iostream.h>
#include<conio.h>
class base
{
	protected:
	int x;
	public:
	void getx()
	{
		cout<<"Enter a Value of x"<<endl;
		cin>>x;
	}
};
class derived1:public base
{
	protected:
	int y;
	public:
	void gety()
	{
		cout<<"Enter a Value of y"<<endl;
		cin>>y;
	}
};
class derived2
{
	protected:
	int z;
	public:
	void getz()
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
	d.getx();	      //Process of Inheritance
	d.gety();      	 	//Process of Inheritance
	d.getz();       	//Process of Inheritance
	d.add();	      //Process of Inheritance
	d.put();
	getch();
}