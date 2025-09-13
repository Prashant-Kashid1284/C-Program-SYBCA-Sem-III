/*To Calculate Addition of Two Numbers using Constructor*/
#include<iostream.h>
#include<conio.h>
class Addition
{
	int x,y,z;
	public:
	Addition()
	{
		x=y=0;
	}
	void read(int p,int q)
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
	Addition a;
	int m,n;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>m>>n;
	a.read(m,n);
	a.calculate();
	a.write();
	getch();
}

