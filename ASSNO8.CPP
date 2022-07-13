#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int st_no;
	char name[20],address[20],course[20];
	long int phone;

	public:
		student()
		{

		}
		student(char *n,char *a,long int p,char *c)
		{
			st_no=1;
			strcpy(name,n);
			strcpy(address,a);
			phone=p;
			strcpy(course,c);
		}
		void display()
		{
			cout<<"enter student no:"<<st_no<<endl;
			cout<<"enter student name:"<<name<<endl;
			cout<<"enter student address:"<<address<<endl;
			cout<<"enter student phone no:"<<phone<<endl;
			cout<<"enter student course:"<<course;
		}
};
void main()
{
	clrscr();
	student s;
	student s1("hemali","mahuva",46598664,"bca");
	s1.display();
	getch();
}