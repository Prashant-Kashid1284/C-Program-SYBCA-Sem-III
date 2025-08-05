/*To accept and dispaly Number of student details using class(Array of Object)*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class student
{
	int rno;
	char name[10];
	float per;
	public:
	void getdata()
	{
		cout<<"Enter a roll no:"<<endl;
		cin>>rno;
		cout<<"Enter a name:"<<endl;
		cin>>name;
		cout<<"Enter a percentage:"<<endl;
		cin>>per;
	}
	void putdata()
	{
		cout<<rno<<"\t";
		cout<<name<<"\t";
		cout<<setprecision(2)<<per<<endl;
	}
};
void main()
{
	student s[10];      //Array of Objects
	int i,n;
	clrscr();
	cout<<"Enter How Many Records"<<endl;
	cin>>n;
	cout<<"To Accept student details"<<endl;
	for(i=0;i<n;i++)
	{
		s[i].getdata();
	}
	cout<<"To display student details"<<endl;
	cout<<"Roll no"<<"\t"<<"name"<<"\t"<<"percentage"<<endl;
	for(i=0;i<n;i++)
	{
		s[i].putdata();
	}
	getch();
}