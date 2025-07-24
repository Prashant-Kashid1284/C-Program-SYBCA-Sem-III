/*To calculate Addition of Two Numbers using Class*/
#include<iostream.h>
#include<conio.h>
class addition
{
	private:          	//access specifier
	int x,y,z;
	public:        		//access specifier
	void input()
	{
		cout<<"Enter Any Two Numbers"<<endl;
		cin>>x>>y;
	}
	void calculate()
	{
		z=x+y;
	}
	void output()
	{
		cout<<"Addition="<<z<<endl;
	}
};
void main()
{
	addition a;	// a is a Object of Class addition
	clrscr();
	a.input();
	a.calculate();
	a.output();
	getch();
}