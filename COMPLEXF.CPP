/*To calculate Addition of 2 Complex Number using Operator(+)Overloading & Friend Function*/
#include<iostream.h>
#include<conio.h>
class Complex
{	int r,i;
	public:        		//access specifier
	void read();
	friend Complex operator+(Complex c1,Complex c2); //friend function
	void write();
};
void Complex::read()
{	cout<<"Enter a Real & Imaginary Part"<<endl;
	cin>>r>>i;
}
Complex operator+(Complex c1,Complex c2)
{
	Complex c3;
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	return c3;
}
void Complex::write()
{
	cout<<r<<"+"<<i<<"i"<<endl;
}
void main()
{
	Complex c1,c2,c3;	// a is a Object of Class addition
	clrscr();
	cout<<"Enter a First Complex Number"<<endl;
	c1.read();
	cout<<"Enter a Second Complex Number"<<endl;
	c2.read();
	c3=c1+c2; //or c3=opeartor+(c1,c2);Opeartor friend function is Called
	cout<<"First Complex Number"<<endl;
	c1.write();
	cout<<"Second Complex Number"<<endl;
	c2.write();
	cout<<"Addition of Complex Number"<<endl;
	c3.write();
	getch();
}