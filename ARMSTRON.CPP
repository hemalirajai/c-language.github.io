#include<iostream.h>
#include<conio.h>
int main()
{
	int num,temp,r,sum=0;
	clrscr();
	cout<<"enter number to be checked:";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
	}
	if(sum==num)
	{
		cout<<"\n"<<num<<" is an armstrong number";
	}
	else
	{
		cout<<"\n"<<num<<" is not an armstrong number";
	}
	getch();
}