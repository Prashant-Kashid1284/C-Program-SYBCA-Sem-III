/*To Print Area of Circle & Square using inline function*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#define PI 3.14
inline void circle(float r)
{	cout<<"Area of Circle="<<setprecision(2)<<PI*r*r<<endl;
}
inline void square(float side)
{	cout<<"Area of Square="<<setprecision(2)<<side*side<<endl;
}
void main()
{	float r,side;
	clrscr();
	cout<<"Enter a Radius of Circle"<<endl;
	cin>>r;
	cout<<"Enter a Side of Square"<<endl;
	cin>>side;
	circle(r);	square(side);
	getch();
}