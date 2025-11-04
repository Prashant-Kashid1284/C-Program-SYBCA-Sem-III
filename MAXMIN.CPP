/*To Calculate Maximum & Minimum of Two Number using Class*/
#include<iostream.h>
#include<conio.h>
class MaxMin
{
	int x,y;
	public:
	void input()
	{
		cout<<"Enter Any Two Numbers"<<endl;
		cin>>x>>y;
	}
	int findMax()
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
	int findMin()
	{
		if(x<y)
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
	MaxMin m;
	clrscr();
	m.input();
	cout<<"Maximum="<<m.findMax()<<endl;
	cout<<"Mininum="<<m.findMin()<<endl;
	getch();
}