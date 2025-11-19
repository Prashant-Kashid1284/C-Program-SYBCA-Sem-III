/*To calculate Addition of Two Numbers using Multilevel Inheritance*/
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
class intermediate:public base
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
class derived:public intermediate
{
	int z;
	public:
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
	d.getx();	//Process of Inheritance
	d.gety();       //Process of Inheritance
	d.add();	//Process of Inheritance
	d.put();
	getch();
}
