/*To Accept & Display Product details for 2 objects*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
struct product
{
	int pcode;
	char name[20];
	float price;
};
void main()
{
	struct product p1,p2;
	clrscr();
	cout<<"Enter product code"<<endl;
	cin>>p1.pcode;
	cout<<"Enter product Name"<<endl;
	cin>>p1.name;
	cout<<"Enter product price"<<endl;
	cin>>p1.price;
	cout<<"Enter product code"<<endl;
	cin>>p2.pcode;
	cout<<"Enter product Name"<<endl;
	cin>>p2.name;
	cout<<"Enter product price"<<endl;
	cin>>p2.price;
	cout<<"Display Details of Product"<<endl;
	cout<<"ProCode"<<"\t"<<"Name"<<"\t"<<"Price"<<endl;
	cout<<p1.pcode<<"\t";
	cout<<p1.name<<"\t";
	cout<<setprecision(2)<<p1.price<<endl;;
	cout<<p2.pcode<<"\t";
	cout<<p2.name<<"\t";
	cout<<setprecision(2)<<p2.price<<endl;;
	getch();
}


