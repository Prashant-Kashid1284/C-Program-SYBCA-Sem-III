/*Define a Class rectangle & To Calculate Area,Perimeter of rectangle*/
#include<iostream.h>
#include<conio.h>
class Rectangle
{
	int l,b,a,p;
	public:
	void accept();
	void calculate();
	void display();
};
void Rectangle::accept()
{
	cout<<"Enter a Length,Breadth"<<endl;
	cin>>l>>b;
}
void Rectangle::calculate()
{
	a=l*b;
	p=2*l+2*b;
}
void Rectangle::display()
{
	cout<<"Area of Ractangle="<<a<<endl;
	cout<<"Permeter of Ractangle="<<p<<endl;
}
void main()
{
	Rectangle r;
	clrscr();
	r.accept();
	r.calculate();
	r.display();
	getch();
}
