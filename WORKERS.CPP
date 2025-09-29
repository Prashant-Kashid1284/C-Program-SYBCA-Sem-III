/*To Accept,Calculate Salary of Worker & Display Worker Details using Array of Objects*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Worker
{
	char name[20];
	int days;
	float rate,salary;
	public:
	void read()
	{
		cout<<"Enter a Name of Worker"<<endl;
		cin>>name;
		cout<<"Enter Days of Worker Worked"<<endl;
		cin>>days;
		cout<<"Enter Pay Rate of Worker"<<endl;
		cin>>rate;
	}
	void calculate()
	{
		salary=days*rate;
	}
	void write()
	{
		cout<<setw(10)<<name;;
		cout<<setw(5)<<days;
		cout<<setw(10)<<rate;
		cout<<setw(10)<<salary<<endl;
	}
};
void main()
{
	Worker w[10];
	char s[10];
	int i,n;
	clrscr();
	cout<<"Enter How Many Records to be Accepted"<<endl;
	cin>>n;
	cout<<"To Accept Worker Details"<<endl;
	for(i=0;i<n;i++)
	{
		w[i].read();
	}
	cout<<"To Display Worker Details"<<endl;
	cout<<setw(10)<<"Name"<<setw(5)<<"Days"<<setw(10)<<"Pay Rate"<<setw(10)<<"Salary"<<endl;
	for(i=0;i<n;i++)
	{
		w[i].calculate();
		w[i].write();
	}

	getch();
}