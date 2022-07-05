#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class item
{
	int i_id,i_stock;
	char i_name[20];
	public:
		void purchase();
		void sales();
		void stock();
		item()
		{
			i_id=1;
			strcpy(i_name,"hemali");
			i_stock=1000;
		}
};
void item::purchase()
{
	float value;
	cout<<"purchase:";
	cin>>value;
	i_stock=i_stock+value;
}
void item::sales()
{
	float value;
	cout<<"sales:";
	cin>>value;
	if(value>i_stock)
	{
		cout<<"enough stock";
	}
	else
		i_stock=i_stock-value;
}
void item::stock()
{
	cout<<"item id:"<<i_id<<endl;
	cout<<"item name:"<<i_name<<endl;
	cout<<"item stock:"<<i_stock<<endl;
}
void main()
{
	clrscr();
	int choice;
	item i;
	cout<<"\npress:\n1->purchase\n2->sales\n3->stock\n0->exit";
	do
	{
		cout<<"enter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1: i.purchase();
				getch();
				break;
			case 2: i.sales();
				getch();
				break;
			case 3: i.stock();
				getch();
				break;
			case 0: exit(0);
				getch();
		}
	}while(1);
	getch();
}