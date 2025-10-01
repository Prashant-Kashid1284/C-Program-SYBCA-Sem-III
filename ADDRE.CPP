/*To calculate Addition of Two Numbers using Objects as an arguments of Function & Returning Object*/
#include<iostream.h>
#include<conio.h>
class addition
{
	int x;
	public:        		//access specifier
	void get()
	{
		cout<<"Enter Any Numbers"<<endl;
		cin>>x;
	}
	addition calculate(addition a2)
	{
		addition a3;
		a3.x=x+a2.x;
		return a3;	//Returning Object
	}
	void put()
	{
		cout<<"Addition="<<x<<endl;
	}
};
void main()
{
	addition a1,a2,a3;	// a1,a2,a3 is a Objects of Class addition
	clrscr();
	a1.get();
	a2.get();
	a3=a1.calculate(a2);   //Object as an argument of Function & Returning Object
	a3.put();
	getch();
}