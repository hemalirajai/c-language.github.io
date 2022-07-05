#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class student
{
	int id;
	char name[10],college_name[10];
	float per;
	public:
		void get_data()
		{
			cout<<"enter id:";cin>>id;
			cout<<"enter name:";cin>>name;
			cout<<"enter per:";cin>>per;
			cout<<"enter college name:";cin>>college_name;

		}
		void display()
		{
			cout<<id<<"\t"<<name<<"\t"<<per<<"\t"<<college_name<<endl;

		}
		void sort(student *s)
		{
			student t;
			for(int i=0;i<5;i++)
			{
				for(int j=i+1;j<5;j++)
				{
					if(strcmp(s[i].name,s[j].name)>0)
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
	student s[10],temp;
	clrscr();
	for(int i=0;i<5;i++)
	{
		s[i].get_data();
	}

	cout<<"id\tname\tper\tcollege_name"<<endl;
	for(i=0;i<5;i++)
	{
		s[i].display();
	}
	temp.sort(s);

	cout<<"id\tname\tper\tcollege_name"<<endl;
	for(i=0;i<5;i++)
	{
		s[i].display();
	}

	getch();

}