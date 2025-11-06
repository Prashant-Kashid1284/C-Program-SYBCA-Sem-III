/*To calculate Discount of Product using single Inheritance*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class product
{
	int pid;
	char pname[10];
	protected:
	float price;
	public:
	void getdata()
	{
		cout<<"Enter a Product Id"<<endl;
		cin>>pid;
		cout<<"Enter a Product Name"<<endl;
		cin>>pname;
		cout<<"Enter a Product Price"<<endl;
		cin>>price;
	}
	void putdata()
	{
		cout<<setw(5)<<pid;
		cout<<setw(10)<<pname;
		cout<<setw(10)<<price;
	}
};
class discount:public product
{
	float dis,total;
	public:
	void read()
	{
		cout<<"Enter a Discount of Product(in per)"<<endl;
		cin>>dis;
	}
	void calculate()
	{
		total=price-(dis*price)/100;
	}
	void display()
	{
		cout<<setw(10)<<dis;
		cout<<setw(10)<<total<<endl;
	}
};
void main()
{
	discount d;
	clrscr();
	cout<<"To Accept Product Details"<<endl;
	d.getdata();	//Process of Inheritance
	d.read();
	d.calculate();	//Process of Inheritance
	cout<<"To Display Product Details"<<endl;
	cout<<setw(5)<<"PID"<<setw(10)<<"Pname"<<setw(10)<<"Price"<<setw(10)<<"Discount"<<setw(10)<<"Total"<<endl;
	d.putdata();
	d.display();
	getch();
}
