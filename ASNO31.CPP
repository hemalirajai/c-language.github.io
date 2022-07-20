#include<iostream.h>
#include<conio.h>
class reverse
{
	int n,i;
	public:
		reverse()
		{
			cout<<"enter number to reverse:";
			cin>>n;
		}
		void out()
		{
			cout<<"the reverse of the entered number:";
			for(i=n;n>0;n=n/10)
			{
				cout<<n%10;
			}
		}
};

void main()
{
	clrscr();
	reverse r;
	r.out();
	getch();
}