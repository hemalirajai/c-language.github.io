#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class student
{
	int id;
	char name[20],college_name[20];
	float per;

	public:
		void get_data()
		{
			cout<<"enter id:";
			cin>>id;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter college name:";
			cin>>college_name;
			cout<<"enter per:";
			cin>>per;
		}
		void display()
		{
			cout<<id<<"\t"<<name<<"\t"<<college_name<<"\t"<<per<<endl;
		}
		void sort(student *s)
		{
			student t;
			for(int i=0;i<10;i++)
			{
				for(int j=i+1;j<10;j++)
				{
					if(strcmp(s[i].college_name,s[j].college_name)>0)
					{
						t=s[i];
						s[i]=s[j];
						s[j]=t;
					}
				}
			}
		}
};
void main()
{
	clrscr();
	student s[10],temp;
	for(int i=0;i<10;i++)
		s[i].get_data();
	cout<<"roll\tname\tcollege-name\t\tper\n";
	for(i=0;i<10;i++)
		s[i].display();
	temp.sort(s);
	{
		cout<<"roll\tname\tcollege_name\t\tper\n";
		for(i=0;i<10;i++)
			s[i].display();
	}
	getch();
}
