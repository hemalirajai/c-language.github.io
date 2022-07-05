#include<iostream.h>
#include<conio.h>
#include<process.h>
class demo
{
	float a,b;
	public:
		inline void get();
		inline void add();
		inline void sub();
		inline void div();
		inline void mul();
};
inline void demo::get()
{
	cout<<"enter a,b:";
	cin>>a>>b;
}
inline void demo::add()
{
	cout<<"addition="<<a+b;
}
inline void demo::sub()
{
	cout<<"subtraction="<<a-b;
}
inline void demo::div()
{
	cout<<"division="<<a/b;
}
inline void demo::mul()
{
	cout<<"multiplication="<<a*b;
}
void main()
{
	int choice;
	clrscr();
	demo d;
	do
	{
		clrscr();
		cout<<"\npress:\n1->get\n2->add\n3->sub\n4->div\n5->mul\n0->exit";
		cout<<"\nenter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1: d.get();
				getch();
				break;
			case 2: d.add();
				getch();
				break;
			case 3: d.sub();
				getch();
				break;
			case 4: d.div();
				getch();
				break;
			case 5: d.mul();
				getch();
				break;
			case 0: exit(0);
		}
	}while(1);
	getch();
}