#include<iostream.h>
#include<conio.h>
class middle
{
	public:
		void mid(int a,int b=3,int c=2)
		{
			if(a<b&&a>c||a>b&&a<c)
			{
				cout<<"middle value is a:"<<a;
			}
			else if(b<a&&b>c||b>a&&b<c)
			{
				cout<<"middle value is b:"<<b;
			}
			else
			{
				cout<<"middle value is c:"<<c;
			}
		}

};

void main()
{
	clrscr();
	middle m;
	m.mid(5);
	getch();
}