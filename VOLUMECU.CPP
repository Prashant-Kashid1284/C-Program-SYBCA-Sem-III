/*Define a Class Cube & To Calculate Volume of Cube*/
#include<iostream.h>
#include<conio.h>
class Cube
{
	int l,w,d,v;
	public:
	void getdata();
	void volume();
	void putdata();
};
void Cube::getdata()
{
	cout<<"Enter a Length,Width & depth"<<endl;
	cin>>l>>w>>d;
}
void Cube::volume()
{
	v=l*w*d;
}
void Cube::putdata()
{
	cout<<"Volume of Cube="<<v<<endl;
}
void main()
{
	Cube c;
	clrscr();
	c.getdata();
	c.volume();
	c.putdata();
	getch();
}

