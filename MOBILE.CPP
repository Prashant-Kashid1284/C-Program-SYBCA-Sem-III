/*To Accept & Display Mobile Details using Parameterized Constructor*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class Mobile
{
	int mid;
	char name[20];
	float price;
	public:
	Mobile()
	{
		mid=0;
		price=0.0f;
	}
	Mobile(int x,char s[],float p)
	{
		mid=x;
		strcpy(name,s);
		price=p;
	}
	void display()
	{
		cout<<setw(10)<<mid;
		cout<<setw(10)<<name;
		cout<<setw(20)<<setprecision(2)<<price<<endl;
	}
};
void main()
{
	Mobile m;
	int x;
	char s[20];
	float p;
	clrscr();
	cout<<"To Accept Mobile Details"<<endl;
	cout<<"Enter Mobile Id"<<endl;
	cin>>x;
	cout<<"Enter a Mobile Name"<<endl;
	cin>>s;
	cout<<"Enter a Mobile Price"<<endl;
	cin>>p;
	m=Mobile(x,s,p);	//Parameterized Constuctor Explicitly Called
	cout<<"To Display Mobile Details"<<endl;
	cout<<setw(10)<<"M ID"<<setw(10)<<"Mob Name"<<setw(5)<<"Price"<<endl;
	m.display();
	getch();
}
