/*To Find Maximum of Two Numbers using friend Function*/
#include<iostream.h>
#include<conio.h>
class Maximum
{
	int x,y;
	public:
	void getdata();
	friend int find(Maximum m);
};
void Maximum::getdata()
{
	cout<<"Enter any Two Numbers"<<endl;
	cin>>x>>y;
}
int find(Maximum m)
{
	if(m.x>m.y)
	{
		return m.x;
	}
	else
	{
		return m.y;
	}
}
void main()
{
	Maximum m;
	clrscr();
	m.getdata();			//Member function is Called
	cout<<"Maximum="<<find(m)<<endl; //Friend Function is Called
	getch();
}







