#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class account
{
	float bal;
	int acc_no;
	char name[20];
	public:
		void deposit();
		void withdraw();
		void display();
		account()
		{
			acc_no=111;
			strcpy(name,"hemali\n");
			bal=2000;
		}
};
void account::deposit()
{
	float value;
	cout<<"enter deposit value:";
	cin>>value;
	bal=bal+value;
}
void account::withdraw()
{
	float value;
	cout<<"enter withdraw value:";
	cin>>value;
	if(value>bal)
	{
		cout<<"insufficient balance";
	}
	bal=bal-value;
}
void account::display()
{
	cout<<"account no"<<acc_no<<endl;
	cout<<"name"<<name<<endl;
	cout<<"balance"<<bal;
}
void main()
{
	clrscr();
	cout<<"\npress:\n
}