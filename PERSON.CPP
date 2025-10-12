/*To Accept & Display Person details using Function Overloading & Array of Objects*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class Person
{
	int p_id;
	char name[20];
	char nation[20],gender[10],birth[20],dissue[20],dexpiry[20];
	public:
	void accept()
	{
		cout<<"Enter a Passport ID of Person"<<endl;
		cin>>p_id;
		cout<<"Enter a Name of Person"<<endl;
		cin>>name;
		cout<<"Enter Nationality of Person"<<endl;
		cin>>nation;
		cout<<"Enter Gender of Person"<<endl;
		cin>>gender;
		cout<<"Enter Birth Date of Person"<<endl;
		cin>>birth;
		cout<<"Enter a Passport Issue Date of Person"<<endl;
		cin>>dissue;
		cout<<"Enter a Passport Expiry Date of Person"<<endl;
		cin>>dexpiry;
	}
	void display()
	{
		cout<<setw(10)<<p_id;
		cout<<setw(10)<<name;
		cout<<setw(15)<<nation;
		cout<<setw(10)<<gender;
		cout<<setw(15)<<birth;
		cout<<setw(15)<<dissue;
		cout<<setw(15)<<dexpiry<<endl;
	}
	void display(char s[])
	{
		if(strcmpi(name,s)==0)        //Compare Two String Ignore Case
		{
			cout<<setw(10)<<p_id;
			cout<<setw(10)<<name;
			cout<<setw(15)<<nation;
			cout<<setw(10)<<gender;
			cout<<setw(15)<<birth;
			cout<<setw(15)<<dissue;
			cout<<setw(15)<<dexpiry<<endl;
		}
	}
};
void main()
{
	Person p[10];
	char s[10];
	int i,n;
	clrscr();
	cout<<"Enter How Many Records to be Accepted"<<endl;
	cin>>n;
	cout<<"To Accept Person Details"<<endl;
	for(i=0;i<n;i++)
	{
		p[i].accept();
	}
	cout<<"To Display Person Details"<<endl;
	cout<<setw(10)<<"Pass_ID"<<setw(10)<<"Name"<<setw(15)<<"Nationality"<<setw(10)<<"Gender"<<setw(15)<<"Birth Date"<<setw(15)<<"Issue Date"<<setw(15)<<"Expiry Date"<<endl;
	for(i=0;i<n;i++)
	{
		p[i].display();
	}
	cout<<"Enter a Name of Person which record is Searched"<<endl;
	cin>>s;
	cout<<"To Display Person Details"<<endl;
	cout<<setw(10)<<"Pass_ID"<<setw(10)<<"Name"<<setw(15)<<"Nationality"<<setw(10)<<"Gender"<<setw(15)<<"Birth Date"<<setw(15)<<"Issue Date"<<setw(15)<<"Expiry Date"<<endl;
	for(i=0;i<n;i++)
	{
		p[i].display(s);
	}
	getch();
}