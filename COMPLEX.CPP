/*To calculate Addition of Two Complex Number using Two Objects*/
#include<iostream.h>
#include<conio.h>
class Complex
{
	int r,i;
	public:        		//access specifier
	void read();
	void addition(Complex c1,Complex c2);
	void write();
};
void Complex::read()
{
	cout<<"Enter a Real & Imaginary Part"<<endl;
	cin>>r>>i;
}
void Complex::addition(Complex c1,Complex c2)
{
	r=c1.r+c2.r;
	i=c1.i+c2.i;
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
	c3.addition(c1,c2);
	cout<<"First Complex Number"<<endl;
	c1.write();
	cout<<"Second Complex Number"<<endl;
	c2.write();
	cout<<"Addition of Complex Number"<<endl;
	c3.write();
	getch();
}