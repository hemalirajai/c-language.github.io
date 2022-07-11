#include<iostream.h>
#include<conio.h>

class Mul
{
	public:
		void area(int a,int b)
		{
			cout<<"multiply 2 numbers:"<<a*b<<endl;
		}
		void area(float p,int q,int r)
		{
			cout<<"multiply 3 numbers:"<<p*q*r<<endl;
		}
		void area(int b,int h,int t,int x)
		{
			cout<<"multiply 4 numbers:"<<b*h*t*x;
		}
};

void main()
{
	Mul M;
	clrscr();
	M.area(5,3);
	M.area(3.0,5,2);
	M.area(5,6,1,4);
	getch();
}
