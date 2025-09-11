/*To Find Maximum of Two Numbers using Constructor*/
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
	void get()
	{
		cout<<"Enter Any Two Numbers"<<endl;
		cin>>x>>y;
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
	m.get();
	cout<<"Maximum="<<m.find()<<endl;
	getch();
}