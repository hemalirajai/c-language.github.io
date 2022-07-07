#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>

class student
{
	int roll;
	char name[20],mobile[10];
	float mark_of_oracle;
	float mark_of_java;
	float mark_of_networking;
	float per;
	float total;
	char grade;
	int i,j;

	public:

	void input();
	void process();
	void output();
};
void student::input()
{

		cout<<"\n Enter the Roll No:";
		cin>>roll;

		cout<<"\n Enter the Mobile No:";
		cin>>mobile;

	       cout<<"\n Enter the Name:";
	       cin>>name;

		do
		{
			cout<<"\n Enter the mark of Oracle:";
			cin>>mark_of_oracle;

		}while(mark_of_oracle<=0 || mark_of_oracle>=100);
		do
		{
			cout<<"\n Enter the mark of Java:";
			cin>>mark_of_java;

		}while(mark_of_java<=0 || mark_of_java>=100);
		do
		{
			cout<<"\n Enter the mark of Networking:";
			cin>>mark_of_networking;

		}while(mark_of_networking<=0 || mark_of_networking>=100);
}
void student::process()
{
	total=mark_of_oracle+mark_of_java+mark_of_networking;

	if(mark_of_oracle>=28&&mark_of_java>=28&&mark_of_networking>=28)
	{
		per=total/3.0;
	}
	else
		per=00;
}
void student::output()
{
	cout<<"\n Roll :"<<roll;
	cout<<"\n Name :"<<name;
	cout<<"\n Oracle :"<<mark_of_oracle;
	cout<<"\n Java :"<<mark_of_java;
	cout<<"\n Networking :"<<mark_of_networking;
	cout<<"\n Total :"<<total;
	cout<<"\n Percentage :"<<per;
	cout<<"\n Grade :";
	{
		if(per>=70&&per<=99)
			cout<<" A";
		else if(per>=60&&per<70)
			cout<<" B";
		else if(per>=50&&per<60)
			cout<<" C";
		else if(per>=40&&per<50)
			cout<<" D";
		else if(per>=33&&per<40)
			cout<<" E";
		else if(per<33)
		{
			cout<<" F";
		}
	}
	cout<<"\n Result -> ";
	{
		if(per>=33)
			cout<<"  Pass";
		else
			cout<<" Fail";
	}

}
void main()
{
	student s;
	clrscr();
	s.input();
	s.process();
	s.output();
	getch();
}