/*To calculate Addition of Two Numbers using Two Objects*/
#include<iostream.h>
#include<conio.h>
class addition
{
	int x;
	public:        		//access specifier
	void get();
	void calculate(addition a1,addition a2);
	void put();
};
void addition::get()
{
	cout<<"Enter Any Numbers"<<endl;
	cin>>x;
}
void addition::calculate(addition a1,addition a2)
{
	x=a1.x+a2.x;
}
void addition::put()
{
	cout<<"Addition="<<x<<endl;
}
void main()
{
	addition a1,a2,a3;	// a is a Object of Class addition
	clrscr();
	a1.get();
	a2.get();
	a3.calculate(a1,a2);
	a3.put();
	getch();
}