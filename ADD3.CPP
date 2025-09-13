/*To Calculate Addition of Two Numbers using Parameterized Constructor*/
#include<iostream.h>
#include<conio.h>
class Addition
{
	int x,y,z;
	public:
	Addition()               //Constructor
	{
		x=y=0;
	}
	Addition(int p,int q)     //Parameterized Constructor
	{
		x=p;
		y=q;
	}
	void calculate()
	{
		z=x+y;
	}
	void write()
	{
		cout<<"Addition="<<z<<endl;
	}
};
void main()
{
	Addition a;      //Constructor Called
	int m,n;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>m>>n;
	a=Addition(m,n);	//Parameterized Explicitly Called
	a.calculate();
	a.write();
	getch();
}