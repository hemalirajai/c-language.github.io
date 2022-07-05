#include<iostream.h>
#include<conio.h>
class product
{
	int id,qty,rate;
	char name[20];

	public:
		void input()
		{
			cout<<"enter id:";
			cin>>id;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter qty:";
			cin>>qty;
			cout<<"enter rate:";
			cin>>rate;
		}
		void output()
		{
			cout<<id<<"\t"<<name<<"\t"<<qty<<"\t"<<rate<<endl;
		}
};
void main()
{
	clrscr();
	product p[10];
	for(int i=0;i<10;i++)
		p[i].input();
	cout<<"id\tname\tqty\trate\n";
	for(i=0;i<10;i++)
		p[i].output();
	getch();
}