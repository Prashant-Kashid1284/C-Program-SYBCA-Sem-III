/*To Calculate Salary of Worker using Parameterized,Default & Copy Constructor*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class Worker
{
	char name[20];
	int days;
	float rate,salary;
	public:
	Worker()
	{
		days=0;
		rate=salary=0.0f;
	}
	Worker(char s[],int d,float r=300);          //default Constuctor
	Worker(Worker &w)
	{                                            //Copy Constructor
		strcpy(name,w.name);
		days=w.days;
		rate=w.rate;
	}
	void calculate()
	{
		salary=days*rate;
	}
	void display()
	{
		cout<<setw(10)<<name;;
		cout<<setw(5)<<days;
		cout<<setw(10)<<rate;
		cout<<setw(10)<<salary<<endl;
	}
};
Worker::Worker(char s[],int d,float r)
{
	strcpy(name,s);                     //Parameterized Constructor
	days=d;
	rate=r;
}
void main()
{
	Worker w1,w2;
	char s[20];
	int d;
	float r;
	clrscr();
	cout<<"To Accept Worker Details"<<endl;
	cout<<"Enter a Name of Worker"<<endl;
	cin.getline(s,20);
	cout<<"Enter Days of Worker Worked"<<endl;
	cin>>d;
	cout<<"Enter Pay Rate of Worker"<<endl;
	cin>>r;
	w1=Worker(s,d,r);  //parameterized constructor Explicitly Called
	w2=Worker(s,d);//default constructor called with default value for rate
	Worker w3(w1);	//copy constructor called
	Worker w4=w2;	//again copy constructor called
	w1.calculate();
	w2.calculate();
	w3.calculate();
	w4.calculate();
	cout<<"To Display Worker Details"<<endl;
	cout<<setw(10)<<"Name"<<setw(5)<<"Days"<<setw(10)<<"Pay Rate"<<setw(10)<<"Salary"<<endl;
	w1.display();
	w2.display();
	w3.display();
	w4.display();
	getch();


















}