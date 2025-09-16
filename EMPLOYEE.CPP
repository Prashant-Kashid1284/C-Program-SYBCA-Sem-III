/*Display details of employee details having salary>5000 using Class*/
#include<iostream.h>
#include<conio.h>
struct employee
{                                        //Non-Homegenous(different)
	int eid;	//2     	 //integer value
	char ename[20]; //20 		 //string value
	float bsal;      //4             //Float Value
};
void main()
{
	struct employee e1,e2,e3,e4,e5;	//e1,e2,e3,e4,e5 is a structure variable
	clrscr();
	cout<<"Enter a Employee ID"<<endl;
	cin>>e1.eid;
	cout<<"Enter a Employee Name"<<endl;
	cin>>e1.ename;
	cout<<"Enter a Employee Salary"<<endl;
	cin>>e1.bsal;
	cout<<"Enter a Employee ID"<<endl;
	cin>>e2.eid;
	cout<<"Enter a Employee Name"<<endl;
	cin>>e2.ename;
	cout<<"Enter a Employee Salary"<<endl;
	cin>>e2.bsal;
	cout<<"Enter a Employee ID"<<endl;
	cin>>e3.eid;
	cout<<"Enter a Employee Name"<<endl;
	cin>>e3.ename;
	cout<<"Enter a Employee Salary"<<endl;
	cin>>e3.bsal;
	cout<<"Enter a Employee ID"<<endl;
	cin>>e4.eid;
	cout<<"Enter a Employee Name"<<endl;
	cin>>e4.ename;
	cout<<"Enter a Employee Salary"<<endl;
	cin>>e4.bsal;
	cout<<"Enter a Employee ID"<<endl;
	cin>>e5.eid;
	cout<<"Enter a Employee Name"<<endl;
	cin>>e5.ename;
	cout<<"Enter a Employee Salary"<<endl;
	cin>>e5.bsal;
	cout<<"Display Details of Employoee having salary>5000"<<endl;
	cout<<"EmpID"<<"\t"<<"Name"<<"\t"<<"Salary"<<endl;
	if(e1.bsal>5000)
	{
		cout<<e1.eid<<"\t";
		cout<<e1.ename<<"\t";
		cout<<e1.bsal<<endl;
	}
	if(e2.bsal>5000)
	{
		cout<<e2.eid<<"\t";
		cout<<e2.ename<<"\t";
		cout<<e2.bsal<<endl;
	}
	if(e3.bsal>5000)
	{
		cout<<e3.eid<<"\t";
		cout<<e3.ename<<"\t";
		cout<<e3.bsal<<endl;
	}
	if(e4.bsal>5000)
	{
		cout<<e4.eid<<"\t";
		cout<<e4.ename<<"\t";
		cout<<e4.bsal<<endl;
	}
	if(e5.bsal>5000)
	{
		cout<<e5.eid<<"\t";
		cout<<e5.ename<<"\t";
		cout<<e5.bsal<<endl;
	}
	getch();
}
