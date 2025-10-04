/*To Display Date in dd-mm-yyyy format using Copy Constructor*/
#include<iostream.h>
#include<conio.h>
class Date
{
	int dd,mm,yyyy;
	public:
	Date(){dd=mm=yyyy=0;}
	Date(int d,int m,int y)
	{
		dd=d;
		mm=m;
		yyyy=y;
	}
	Date(Date &d)
	{
		dd=d.dd;
		mm=d.mm;
		yyyy=d.yyyy;
	}
	void display();
};
void Date::display()
{
	cout<<dd<<"-";
	switch(mm)
	{
		case 1:	cout<<"Jan"<<"-";
			break;
		case 2:	cout<<"Feb"<<"-";
			break;
		case 3:	cout<<"Mar"<<"-";
			break;
		case 4:	cout<<"Apr"<<"-";
			break;
		case 5:	cout<<"May"<<"-";
			break;
		case 6:	cout<<"Jun"<<"-";
			break;
		case 7:	cout<<"Jul"<<"-";
			break;
		case 8:	cout<<"Aug"<<"-";
			break;
		case 9:	cout<<"Sep"<<"-";
			break;
		case 10:cout<<"Oct"<<"-";
			break;
		case 11:cout<<"Nov"<<"-";
			break;
		case 12:cout<<"Dec"<<"-";
			break;
		default:cout<<"Invalid Month"<<"-";
	}
	cout<<yyyy<<endl;
}
void main()
{
	Date d1;
	int d,m,y;
	clrscr();
	cout<<"Enter a Date(Day,Month & Year)"<<endl;
	cin>>d>>m>>y;
	d1=Date(d,m,y);	//Parameterized Constructor Called Explicitly
	cout<<"To Display Date in dd-Month-yyyy Format"<<endl;
	d1.display();
	Date d2(d1);     //Date d2=d1;  Copy Constructor Called
	d2.display();
	getch();
}
