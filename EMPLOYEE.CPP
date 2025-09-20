/*To accept and display Employee details with Gross Salary using Array of Object)*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Employee
{
	char name[10];
	float da,hra,bs,gs;
	public:
	void getdata()
	{
		cout<<"Enter a name of Employee"<<endl;
		cin>>name;
		cout<<"Enter a Basic Salary"<<endl;
		cin>>bs;
	}
	void calculate()
	{
		da=0.445*bs;
		hra=0.15*bs;
		gs=bs+da+hra;
	}
	void putdata()
	{
		cout<<name<<"\t";
		cout<<bs<<"\t\t";
		cout<<gs<<endl;
	}
};
void main()
{
	Employee e[10];      //Array of Objects
	int i;
	clrscr();
	cout<<"To Accept Employee details"<<endl;
	for(i=0;i<5;i++)
	{
		e[i].getdata();
	}
	for(i=0;i<5;i++)
	{
		e[i].calculate();
	}
	cout<<"To display Employee details"<<endl;
	cout<<"Name"<<"\t"<<"Basic Salary"<<"\t"<<"Gross Salary"<<endl;
	for(i=0;i<5;i++)
	{
		e[i].putdata();
	}
	getch();
}