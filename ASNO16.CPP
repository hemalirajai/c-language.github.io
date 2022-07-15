#include<iostream.h>
#include<conio.h>
class interest
{
	public:
		void calc(int r,int p=120,int n=10)
		{
			cout<<"simple interest:"<<(p*r*n)/100;
		}
};

void main()
{
	clrscr();
	interest i;
	i.calc(15);
	getch();
}