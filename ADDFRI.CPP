/*To Calculate Addition of Two Numbers using Friend Function*/
#include<iostream.h>
#include<conio.h>
class Addition
{
	int x,y,z;
	public:
	void read(int p,int q)
	{
		x=p;
		y=q;
	}
	friend void calculate(Addition &t);
	void write()
	{
		cout<<"Addition="<<z<<endl;
	}
};
void calculate(Addition &t)
{
	t.z=t.x+t.y;
}
void main()
{
	Addition a;
	int m,n;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>m>>n;
	a.read(m,n);            //Member function
	calculate(a);   //Object as an argument of function(Normal Function)
	a.write();              //Member Function
	getch();
}