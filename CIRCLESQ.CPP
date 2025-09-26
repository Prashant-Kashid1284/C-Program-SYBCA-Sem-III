/*To Print Area of Circle & Square using inline function*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#define PI 3.14
inline void area(float r,float side)
{
	cout<<"Area of Circle="<<setprecision(2)<<PI*r*r<<endl;
	cout<<"Area of Square="<<setprecision(2)<<side*side<<endl;
}
void main()
{
	float r,side;
	clrscr();
	cout<<"Enter a Radius of Circle"<<endl;
	cin>>r;
	cout<<"Enter a Side of Square"<<endl;
	cin>>side;
	area(r,side);
	getch();
}