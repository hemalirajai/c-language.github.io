#include<iostream.h>
#include<conio.h>
class Addition
{
	public:
		void add(int a,int b=3,int c=5)
		{
			cout<<"addition:"<<a+b+c;
		}
};

void main()
{
	clrscr();
	Addition A;
	A.add(2);
	getch();
}