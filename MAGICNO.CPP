#include<iostream.h>
#include<conio.h>
int main()
{
	int num,i;
	clrscr();
	cout<<"enter the number:";
	cin>>num;
	int num1=num;
	int sum=0,r;
	while(num1!=0)
	{
		r=num1%10;
		sum+=r;
		num1/=10;
	}
	int rev=0,num2=sum,r2;
	while(num2!=0)
	{
		r2=num2%10;
		rev=rev*10+r2;
		num2/=10;
	}
	if(sum*rev==num)
	{
		cout<<"it is a magic number";
	}
	else
	{
		cout<<"it is not a magic number";
	}
	getch();
}