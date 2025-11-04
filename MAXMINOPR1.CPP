/*To Calculate Maximum & Minimum of Two Number using Operator Overloading*/
#include<iostream.h>
#include<conio.h>
class MaxMin
{
	private:
	int x;
	public:
	public:
	void input(int p)
	{
		x=p;
	}
	int operator>(MaxMin n)             //T or 1
	{                                   //F or 0
		if(x>n.x)
		{//50>90 F
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int operator<(MaxMin n)
	{
		if(x<n.x)
		{//50<90 T
			return 1;
		}
		else
		{
			return 0;
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
	if(m>n)      //m.operator>(n)
	{
		cout<<"Maximum="<<a<<endl;
	}
	else
	{
		cout<<"Maximum="<<b<<endl;
	}

	if(m.operator<(n))     //m<n
	{
		cout<<"Minimum="<<a<<endl;
	}
	else
	{
		cout<<"Minimum="<<b<<endl;
	}
	getch();
}