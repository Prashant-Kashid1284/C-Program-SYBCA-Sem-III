/*To Calculate Average Salary of Employee using friend function*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Employee
{
	char name[20];
	float salary;
	public:
	void read()
	{
		cout<<"Enter a Name of Employee"<<endl;
		cin>>name;
		cout<<"Enter Salary of Employee"<<endl;
		cin>>salary;
	}
	friend void average(Employee e,int n);
	void write()
	{
		cout<<setw(10)<<name;;
		cout<<setw(10)<<salary<<endl;
	}
};
void average(Employee e,int n)
{
	static float sum=0,avg,i=0;
	i++;
	sum=sum+e.salary;
	if(i==n)
	{
		avg=sum/n;
		cout<<"Average="<<avg<<endl;
	}
}
void main()
{
	Employee e[5];	//Array of Object
	int i,n;
	clrscr();
	cout<<"Enter How Many Record of Employee"<<endl;
	cin>>n;
	cout<<"To Accept Employee Details"<<endl;
	for(i=0;i<n;i++)
	{
		e[i].read();
	}
	cout<<"To Display Employee Details"<<endl;
	cout<<setw(10)<<"Name"<<setw(10)<<"Salary"<<endl;
	for(i=0;i<n;i++)
	{
		e[i].write();
	}
	for(i=0;i<n;i++)
	{
		average(e[i],n);
	}
	getch();
}