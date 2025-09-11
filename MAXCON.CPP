/*To Find Maximum of Ywo Numbers using Constructor*/
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
	void get(int p,int q)
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
	Maximum m;
	int a,b;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>a>>b;
	m.get(a,b);
	int f=m.find();
	cout<<"Maximum="<<f<<endl;
	getch();
}