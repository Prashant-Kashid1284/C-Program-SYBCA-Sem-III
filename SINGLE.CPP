/*To calculate Addition of Two Numbers using Inheritance*/
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
class derived:public base
{
	int y,z;
	public:
	void gety()
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
	d.getx();	//Process of Inheritance
	d.gety();
	d.add();	//Process of Inheritance
	d.put();
	getch();
}
