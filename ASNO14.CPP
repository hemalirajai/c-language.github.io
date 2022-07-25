#include<iostream.h>
#include<conio.h>
class division
{
	public:
		float div(float p,float q)
		{
			return(p/q);
		}
};

void main()
{
	clrscr();
	division d;
	float x=d.div(20.0,10.0);
	cout<<"division is:"<<x;
	getch();
}