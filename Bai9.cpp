#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
class Fraction
{
	private:
		int Numerator;
		int Denominator;
	public:
		Fraction(){};
		Fraction(int Numerator,int Denominator)
		{
			this -> Numerator = Numerator;
			this -> Denominator = Denominator;
		};
		void EnterFraction();
		Fraction SumFraction(Fraction);
		void Lowterms();
		void Display();
};

int main()
{
	Fraction f1(2,5),f2(5,2), f3;
	char key = 0;
	do
	{
		f1.EnterFraction();
		f2.EnterFraction();
		f3 = f1.SumFraction(f2);
		f3.Display();
		cout<<"\nIf you want end, you need press ESC, else press any key..."<<endl;
		key = getch();
		system("cls");	
	}while(key!=27);
	system("pause");
	return 0; 
}
void Fraction::Lowterms()
{
	long tnum, tden, temp, gcd;
	tnum = labs(Numerator); 
	tden = labs(Denominator);
	if(tden==0 ) 
	{
		cout << "Illegal fraction: division by 0";
		exit(1);
	}
	else if( tnum==0 ) 
	{
		Numerator=0;
		Denominator = 1;
		return;
	}
	while(tnum != 0)
	{
		if(tnum < tden)
		{
			temp=tnum;
			tnum=tden;
			tden=temp;
		} 
		tnum = tnum - tden; 
	}
		gcd = tden; 
		Numerator = Numerator / gcd; 
		Denominator = Denominator / gcd; 
}
void Fraction::EnterFraction()
{
	cout<<"Fraction : ";
	char c=0;
	cin>>Numerator>>c>>Denominator;
}
Fraction Fraction::SumFraction(Fraction b)
{
	Fraction c;
	c.Denominator = b.Denominator * Denominator;
	c.Numerator = b.Numerator * Denominator + Numerator * b.Denominator;
	return c;
}
void Fraction::Display()
{
	if(Numerator!=Denominator&&Denominator!=1)
	{
	Lowterms();
	cout<<Numerator<<"/"<<Denominator;
	}
	else
	{
	Lowterms();
	cout<<Numerator;
	}
}
