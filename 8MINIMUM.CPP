#include<iostream.h>
#include<conio.h>
class second;
class third;
class first
{
	int a;
	public:
		void get()
		{
			cout<<"enter value of a:";
			cin>>a;
		}
		friend void min(first,second,third);
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
		friend void min(first,second,third);
};
class third
{
	int c;
	public:
		void get()
		{
			cout<<"enter value of c:";
			cin>>c;
		}
		friend void min(first,second,third);
};
void min(first x,second y,third z)
{
	if(x.a<y.b&&x.a>z.c||x.a>y.b&&x.a<z.c)
		cout<<"a is min"<<x.a;
	else if(y.b<x.a&&y.b>z.c||y.b>x.a&&y.b<z.c)
		cout<<"b is min"<<y.b;
	else
		cout<<"c is min"<<z.c;
}
void main()
{
	clrscr();
	first A;
	A.get();
	second B;
	B.get();
	third C;
	C.get();
	min(A,B,C);
	getch();
}