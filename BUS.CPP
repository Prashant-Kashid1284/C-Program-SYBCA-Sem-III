/*Menu Driven Program for Bus details*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<process.h>
class Bus
{
	int bno;
	char name[10];
	int seats;
	char start[10],dest[10];
	public:
	void accept()
	{
		cout<<"Enter a Bus Number"<<endl;
		cin>>bno;
		cout<<"Enter a Name of Bus"<<endl;
		cin>>name;
		cout<<"Enter a Number of Seats"<<endl;
		cin>>seats;
		cout<<"Enter a Starting Point"<<endl;
		cin>>start;
		cout<<"Enter a Destination Point"<<endl;
		cin>>dest;
	}
	void display()
	{
		cout<<setw(5)<<bno;
		cout<<setw(10)<<name;
		cout<<setw(10)<<seats;
		cout<<setw(15)<<start;
		cout<<setw(10)<<dest<<endl;
	}
	void search(char s[],char d[])
	{
		if(strcmp(start,s)==0 && strcmp(dest,d)==0)
		{
			display();
		}
	}
};
void main()
{
	Bus b[10];
	int i,n,ch;
	char s[10],d[10];
	clrscr();
	cout<<"Menu Driven Program"<<endl;
	do
	{
		cout<<"1:Accept Bus Details"<<endl;
		cout<<"2:Display Bus Details"<<endl;
		cout<<"3:Search Bus Details from Starting & Destination Point"<<endl;
		cout<<"0:Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:	cout<<"Enter How many Record are Accepted"<<endl;
				cin>>n;
				cout<<"Accept Bus Details"<<endl;
				for(i=0;i<n;i++)
				{
					b[i].accept();
				}
				break;
			case 2: cout<<"To Display Bus Details"<<endl;
				cout<<setw(5)<<"BusNo"<<setw(10)<<"Bus Name"<<setw(10)<<"No.Seats"<<setw(15)<<"StartPoint"<<setw(10)<<"EndPoint"<<endl;
				for(i=0;i<n;i++)
				{
					b[i].display();
				}
				break;
			case 3:	cout<<"Search a Stating Point"<<endl;
				cin>>s;
				cout<<"Search a Ending Point"<<endl;
				cin>>d;
				cout<<"To Display Bus Details"<<endl;
				cout<<setw(5)<<"BusNo"<<setw(10)<<"Bus Name"<<setw(10)<<"No.Seats"<<setw(15)<<"StartPoint"<<setw(10)<<"EndPoint"<<endl;
				for(i=0;i<n;i++)
				{
					b[i].search(s,d);
				}
				break;
			case 0:	exit(0);
			default:cout<<"Wrong Choice"<<endl;
		}
	}while(ch!=0);
	getch();
}