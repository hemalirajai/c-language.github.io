#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

class employee
{
	int emp_id;
	float emp_basic_salary,da,hra,net_salary;
	char emp_name[10];
	public:
		void get_data();
		void calculate();
		void display();
};
void employee::get_data()
{
	cout<<"enter employee no:";cin>>emp_id;
	cout<<"enter employee name:";cin>>emp_name;
	cout<<"enter basic salary:";cin>>emp_basic_salary;
}
void employee::calculate()
{
	da=emp_basic_salary*10/100;
	hra=emp_basic_salary*12/100;
	net_salary=emp_basic_salary+da+hra;
}
void employee::display()
{
	cout<<"employee no:"<<emp_id<<endl;
	cout<<"employee name:"<<emp_name<<endl;
	cout<<"basic salary:"<<emp_basic_salary<<endl;
	cout<<"DA:"<<da<<endl;
	cout<<"HRA:"<<hra<<endl;
	cout<<"net salary:"<<net_salary<<endl;
}
void main()
{
	clrscr();
	employee e;
	cout<<endl;
	e.get_data();
	e.calculate();
	e.display();
	getch();

}
