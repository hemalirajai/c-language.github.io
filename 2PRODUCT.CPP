#include<iostream.h>
#include<conio.h>
class product
{
	int p_id,p_qty;
	char p_name[20];

	public:
		void input()
		{
			cout<<"enter p_id:";
			cin>>p_id;
			cout<<"enter p_name:";
			cin>>p_name;
			cout<<"enter p_qty:";
			cin>>p_qty;
		}
		void display()
		{
			cout<<"p_id:"<<p_id<<endl;
			cout<<"p_name:"<<p_name<<endl;
			cout<<"p_qty:"<<p_qty<<endl;
		}
};
void main()
{
	product p;
	clrscr();
	p.input();
	p.display();
	getch();
}