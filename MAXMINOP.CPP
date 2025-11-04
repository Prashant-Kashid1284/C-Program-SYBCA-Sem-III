/*To Calculate Maximum & Minimum of Two Number using Operator Overloading*/
#include<iostream.h>
#include<conio.h>
class MaxMin
{
	int x;
	public:
	void input(int p)
	{
		x=p;
	}
	int operator>(MaxMin n)
	{
		if(x>n.x)
		{//50>90 F
			return x;
		}
		else
		{
			return n.x;
		}
	}
	int operator<(MaxMin n)
	{
		if(x<n.x)
		{
			return x;
		}
		else
		{
			return n.x;
		}
	}
};
void main()
{
	MaxMin m,n;
	int a,b;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>a>>b;
	m.input(a);
	n.input(b);
	cout<<"Maximum="<<m.operator>(n)<<endl;   //passing object as argument
	cout<<"Mininum="<<m.operator<(n)<<endl;   //passing object as argument
	getch();
}