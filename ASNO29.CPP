#include<iostream.h>
#include<conio.h>
class ALPHABET
{
	public:
		int value;
		ALPHABET()
		{
			value=23;
		}
		ALPHABET(int x)
		{
			value=x;
		}
		ALPHABET(ALPHABET &a)
		{
			value=a.value;
		}
};

void main()
{
	clrscr();
	ALPHABET alpha;
	ALPHABET beta(alpha.value);
	ALPHABET theta=beta;
	ALPHABET gamma=theta;

	cout<<"value of alpha:"<<alpha.value<<endl;
	cout<<"value of beta:"<<beta.value<<endl;
	cout<<"value of theta:"<<theta.value<<endl;
	cout<<"value of gamma:"<<gamma.value;
	getch();
}
