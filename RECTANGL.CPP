/*To Calculate Area of Rectangle using Inline function with default Value
for width*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
inline void area(float l,float w)
{
	cout<<"Area of Circle="<<setprecision(2)<<l*w<<endl;
}
void main()
{
	float l,w;
	void area(float l,float w=5);
	clrscr();
	cout<<"Enter a Length & Width of Rectangle"<<endl;
	cin>>l>>w;
	area(l,w);	//No default value
	area(l);	//default value for width
	getch();
}