#include<iostream.h>
#include<conio.h>

class palindrome
{
	public:
		int x;
		palindrome()
		{
			cout<<"enter value of x:";
			cin>>x;
		}
		void put()
		{
			int rev=0,value;
			value=x;
			while(x>0)
			{
				rev=rev*10+x%10;
				x=x/10;
			}
			if(value==rev)
			{
				cout<<" is a palindrome number:"<<value<<endl;
			}
			else
			{
				cout<<" is not a palindrome number:"<<value<<endl;
			}
		}
};

void main()
{
	clrscr();
	palindrome p;
	p.put();
	getch();
}