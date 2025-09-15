/*Example of Copy Constructor*/
#include<iostream.h>
#include<conio.h>
class sample
{
	int x;
	public:
	sample()
	{
		x=0;
	}
	sample(int p)
	{
		x=p;
	}
	sample(sample &s)
	{
		x=s.x;
	}
	void print()
	{
		cout<<"Value of x="<<x<<endl;
	}
};
void main()
{
	sample s1(90);
	clrscr();
	sample s2(s1);   //Copy Constructor Called
	sample s3=s2;	//Copy Constructor Called again
	s1.print();
	s2.print();
	s3.print();
	getch();
}
