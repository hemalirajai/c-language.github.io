#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
	char name[20],address[20];

	public:
		void get()
		{
			cout<<"enter roll:";
			cin>>roll;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter address:";
			cin>>address;
		}
		void put()
		{
			cout<<roll<<"\t"<<name<<"\t"<<address<<endl;
		}
};
void main()
{
	clrscr();
	student s[5];
	for(int i=0;i<5;i++)
		s[i].get();
	cout<<"roll\tname\taddress\n";
	for(i=0;i<5;i++)
		s[i].put();
	getch();
}