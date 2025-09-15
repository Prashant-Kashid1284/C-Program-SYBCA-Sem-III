/*To Find Maximum of Two Numbers using default Constructor(1 Default Value)*/
#include<iostream.h>
#include<conio.h>
class maximum
{
	int x,y;
	public:
	maximum();
	maximum(int p,int q=30);
	int find();
};
maximum::maximum(){x=y=0;}
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
	maximum m1,m2;   //Constructor Called
	int a,b;
	clrscr();
	cout<<"Enter Any Two Numbers"<<endl;
	cin>>a>>b;
	m1=maximum(a,b);	//Parametrized Explicitly Called
	m2=maximum(a);		//deafault Constructor
	cout<<"Maximum="<<m1.find()<<endl;
	cout<<"Maximum="<<m2.find()<<endl;
	getch();
}