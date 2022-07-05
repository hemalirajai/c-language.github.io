#include<iostream.h>
#include<conio.h>
class second;
class first
{
	int a;
	public:
		void get()
		{
			cout<<"enter value of a:";
			cin>>a;
		}
		friend void max(first,second);
};
class second
{
	int b;
	public:
		void get()
		{
			cout<<"enter value of b:";
			cin>>b;
		}
		friend void max(first,second);
};
void max(first x,second y)
{
	if(x.a>y.b)
		cout<<"a is max"<<x.a;
	else
		cout<<"b is max"<<y.b;
}
void main()
{
	clrscr();
	first A;
	A.get();
	second B;
	B.get();
	max(A,B);
	getch();

}