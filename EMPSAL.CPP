/*Display details of employee details having salary>5000 using Array of structure*/
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
	struct employee e[5];	//e is a Array of structure variable
	int i;
	clrscr();
	cout<<"To Accept Details of 5 Employee"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter a Employee ID"<<endl;
		cin>>e[i].eid;
		cout<<"Enter a Employee Name"<<endl;
		cin>>e[i].ename;
		cout<<"Enter a Employee Salary"<<endl;
		cin>>e[i].bsal;
	}
	cout<<"Display Details of Employoee having salary>5000"<<endl;
	cout<<"EmpID"<<"\t"<<"Name"<<"\t"<<"Salary"<<endl;
	for(i=0;i<5;i++)
	{
		if(e[i].bsal>5000)
		{
			cout<<e[i].eid<<"\t";
			cout<<e[i].ename<<"\t";
			cout<<e[i].bsal<<endl;
		}
	}
	getch();
}
