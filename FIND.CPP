/*To Find Sum of Numbers Between 1 to n using Parameterized Constructor*/
#include<iostream.h>
#include<conio.h>
class Number
{
	int i,r,sum;
	public:
	Number()
	{
		r=sum=0;
	}
	Number(int x)
	{
		r=x;
	}
	void find();
};
void Number::find()
{
	for(i=1;i<=r;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of 1 to "<<r<<"="<<sum<<endl;
}
void main()
{
	int n;
	clrscr();
	cout<<"Enter a Range(Limit)"<<endl;
	cin>>n;    		//n=10
	Number obj(n);  //Parameterized Constructor Implicitly Called
	obj.find();
	getch();
}