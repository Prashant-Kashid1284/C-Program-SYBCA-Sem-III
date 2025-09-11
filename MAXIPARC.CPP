/*To Find Maximum of Ywo Numbers using Parameterized Constructor(Implicitly)*/
#include<iostream.h>
#include<conio.h>
class Maximum
{
	int x,y;
	public:
	Maximum()
	{
		x=y=0;
	}
	Maximum(int p,int q)
	{
		x=p;
		y=q;
	}
	int find()
	{
		if(x>y)
		{
			return x;
		}
		else
		{
			return y;
		}
	}
};
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>a>>b;
	Maximum m(a,b);//Constructor &ParameterizedConstructorImplicit Called
	int f=m.find();
	cout<<"Maximum="<<f<<endl;
	getch();
}