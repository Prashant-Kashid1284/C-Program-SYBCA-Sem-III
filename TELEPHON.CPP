/*To Accept & Display telephone details using Function Overloading & Array of Objects*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class telephone
{
	char name[20];
	double phno;
	char city[10];
	public:
	void accept()
	{
		cout<<"Enter a Name of Customer"<<endl;
		cin>>name;
		cout<<"Enter a Phone Number of Customer"<<endl;
		cin>>phno;
		cout<<"Enter a City of Customer"<<endl;
		cin>>city;
	}
	void display()
	{
		cout<<setw(10)<<name;
		cout<<setw(15)<<phno;
		cout<<setw(10)<<city<<endl;
	}
	void search(char s[])
	{
		if(strcmpi(name,s)==0)        //Compare Two String Ignore Case
		{
			cout<<setw(10)<<name;
			cout<<setw(15)<<phno;
			cout<<setw(10)<<city<<endl;
		}
	}
	void search(double p)
	{
		if(phno==p)        //Compare Two String Ignore Case
		{
			cout<<setw(10)<<name;
			cout<<setw(15)<<phno;
			cout<<setw(10)<<city<<endl;
		}
	}
	void search(unsigned char c[])
	{
		if(strcmpi(city,c)==0)        //Compare Two String Ignore Case
		{
			cout<<setw(10)<<name;
			cout<<setw(15)<<phno;
			cout<<setw(10)<<city<<endl;
		}
	}
};
void main()
{
	telephone t[10];
	char s[10];
	unsigned char c[10];
	double p;
	int i,n;
	clrscr();
	cout<<"Enter How Many Records to be Accepted"<<endl;
	cin>>n;
	cout<<"To Accept Telephone Details of Customer"<<endl;
	for(i=0;i<n;i++)
	{
		t[i].accept();
	}
	cout<<"To Display Telephone Details"<<endl;
	cout<<setw(10)<<"Name"<<setw(15)<<"Phone Number"<<setw(10)<<"City"<<endl;
	for(i=0;i<n;i++)
	{
		t[i].display();
	}
	cout<<"Enter a Search Name of given Cusomer"<<endl;
	cin>>s;
	cout<<"To Search Telephone Number with given Name"<<endl;
	cout<<setw(10)<<"Name"<<setw(15)<<"Phone Number"<<setw(10)<<"City"<<endl;
	for(i=0;i<n;i++)
	{
		t[i].search(s);
	}
	cout<<"Enter a Search Phone Number of given Cusomer"<<endl;
	cin>>p;
	cout<<"To Search Name with given Telephone Number"<<endl;
	cout<<setw(10)<<"Name"<<setw(15)<<"Phone Number"<<setw(10)<<"City"<<endl;
	for(i=0;i<n;i++)
	{
		t[i].search(p);
	}
	cout<<"Enter a Search City of given Cusomer"<<endl;
	cin>>c;
	cout<<"To Search All Customer in a given City"<<endl;
	cout<<setw(10)<<"Name"<<setw(15)<<"Phone Number"<<setw(10)<<"City"<<endl;
	for(i=0;i<n;i++)
	{
		t[i].search(c);
	}
	getch();
}