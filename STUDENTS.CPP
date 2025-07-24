/*To Accept & Display student details using class*/
#include<iostream.h>
#include<conio.h>
class student
{
	private:
	int rno;
	char name[10];
	float per;
	public:
	void getdata()
	{
		cout<<"Enter a Roll No"<<endl;
		cin>>rno;
		cout<<"Enter a Name"<<endl;
		cin>>name;
		cout<<"Enter a Percentage"<<endl;
		cin>>per;
	}
	void putdata()
	{
		cout<<rno<<"\t";
		cout<<name<<"\t";
		cout<<per<<endl;
	}
};
void main()
{
	student s1,s2,s3;
	clrscr();
	cout<<"To Accept student Details"<<endl;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	cout<<"To Display student Details"<<endl;
	cout<<"Roll No"<<"\t"<<"Name"<<"\t"<<"Percentage"<<endl;
	s1.putdata();
	s2.putdata();
	s3.putdata();
	getch();
}
