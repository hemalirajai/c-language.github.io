#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
	char name[20],course[20];

	public:
		void get_data()
		{
			cout<<"enter roll no:";
			cin>>roll;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter course name:";
			cin>>course;
		}
		void put_data()
		{
			cout<<"roll:"<<roll<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"course:"<<course<<endl;
		}
};
void main()
{
	student s;
	clrscr();
	s.get_data();
	s.put_data();
	getch();
}