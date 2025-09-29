/*To Accept,Calculate Salary of Worker & Display Worker Details using Class*/
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
		cin.getline(name,20);
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
	Worker w;
	clrscr();
	cout<<"To Accept Worker Details"<<endl;
	w.read();
	w.calculate();
	cout<<"To Display Worker Details"<<endl;
	cout<<setw(10)<<"Name"<<setw(5)<<"Days"<<setw(10)<<"Pay Rate"<<setw(10)<<"Salary"<<endl;
	w.write();
	getch();
}