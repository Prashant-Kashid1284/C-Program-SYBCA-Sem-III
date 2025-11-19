/*To calculate Addition of Two Numbers using Multiple Inheritance*/
#include<iostream.h>
#include<conio.h>
class base1
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
class base2
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
class derived:public base1,public base2
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
