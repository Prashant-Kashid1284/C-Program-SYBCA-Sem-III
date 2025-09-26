/*To Return Length of given string using Inline function*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
inline int length(char s[])
{
	return strlen(s);
}
void main()
{
	char s[20];
	int lenght(char s[]);
	clrscr();
	cout<<"Enter a String"<<endl;
	cin.getline(s,20);
	cout<<"Length of String="<<length(s);
	getch();
}