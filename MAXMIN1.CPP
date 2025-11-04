/*To Calculate Maximum & Minimum of Two Number using Object as function arguments*/
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
	int findMax(MaxMin n)
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
	int findMin(MaxMin n)
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
	cout<<"Maximum="<<m.findMax(n)<<endl;   //passing object as Function argument
	cout<<"Mininum="<<m.findMin(n)<<endl;   //passing object as Function argument
	getch();
}