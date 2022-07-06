#include<iostream.h>
#include<conio.h>

class inline_data
{
	int a,b,c;
	public:
		inline void get();
		inline void display();
};
inline void inline_data::get()
{
	cout<<"enter value of a,b,c:";
	cin>>a>>b>>c;
}
inline void inline_data::display()
{
	if(a<b&&a<c)
	{
		cout<<"a is smallest"<<a;
	}
	else if(b<c)
	{
		cout<<"b is smallest"<<b;
	}
	else
	{
		cout<<"c is smallest"<<c;
	}
}
void main()
{
	clrscr();
	inline_data d;
	d.get();
	d.display();
	getch();
}