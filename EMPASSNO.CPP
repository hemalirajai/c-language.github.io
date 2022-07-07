#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

class employee
{
	int emp_no;
	float bsalary,gsalary,ta,da,hra,pf,net_salary;
	char name[10];
	public:
		void getdata();
		void calculate();
		void putdata();
};
void employee::getdata()
{
	cout<<"enter employee no:";cin>>emp_no;
	cout<<"enter employee name:";cin>>name;
	cout<<"enter basic salary:";cin>>bsalary;
}
void employee::calculate()
{
	ta=bsalary*10/100;
	da=bsalary*40/100;
	hra=bsalary*25/100;
	gsalary=bsalary+ta+da+hra;
	pf=bsalary*15/100;
	net_salary=gsalary-pf;
}
void employee::putdata()
{
	cout<<"employee no:"<<emp_no<<endl;
	cout<<"employee name:"<<name<<endl;
	cout<<"basic salary:"<<bsalary<<endl;
	cout<<"TA:"<<ta<<endl;
	cout<<"DA:"<<da<<endl;
	cout<<"HRA:"<<hra<<endl;
	cout<<"PF:"<<pf<<endl;
	cout<<"net salary:"<<net_salary<<endl;
}
void main()
{
	clrscr();
	employee e;
	cout<<endl;
	e.getdata();
	e.calculate();
	e.putdata();
	getch();

}
