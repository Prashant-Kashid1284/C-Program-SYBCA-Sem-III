/*To Accept Student details & Display Roll No of student having higher percentage*/
#include<iostream.h>
#include<conio.h>
struct student
{
	int rollno;
	float per;
};
void main()
{
	struct student s1,s2;
	clrscr();
	cout<<"Enter Student roll no"<<endl;
	cin>>s1.rollno;
	cout<<"Enter Student percentage"<<endl;
	cin>>s1.per;
	cout<<"Enter student roll no"<<endl;
	cin>>s2.rollno;
	cout<<"Enter student percentage"<<endl;
	cin>>s2.per;
	cout<<"Display Details of students having Higher Percentage"<<endl;
	cout<<"RollNo"<<"\t"<<"Percentage"<<endl;
	if(s1.per>s2.per)
	{
		cout<<s1.rollno<<"\t";
		cout<<s1.per<<endl;
	}
	else
	{
		cout<<s2.rollno<<"\t";
		cout<<s2.per<<endl;
	}
	getch();
}
