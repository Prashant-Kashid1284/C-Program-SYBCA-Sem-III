/*To Find Maximum of Two Numbers using default Constructor*/
#include<iostream.h>
#include<conio.h>
class maximum
{
	int x,y;
	public:
	maximum(int p=70,int q=30);
	int find();
};
maximum::maximum(int p,int q)
{
	x=p;
	y=q;
}
int maximum::find()
{
	if(x>y)
	return x;
	else
	return y;
}
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>a>>b;
	maximum m1(a,b),m2(a),m3;//Constructor& Deafault Constructor(Implicit)
	cout<<"Maximum="<<m1.find()<<endl;
	cout<<"Maximum="<<m2.find()<<endl;
	cout<<"Maximum="<<m3.find()<<endl;
	getch();
}