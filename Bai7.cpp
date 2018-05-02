#include<iostream>
#include<conio.h>
using namespace std;
enum DIR 
{
	N,
	S,
	E,
	W
};
char dirC[5] = {'N','S','E','W'};
class ANGLE 
{
	private:
		int Degrees;
		float Minutes;
		DIR Direction; 
	public:
		ANGLE(){};
		ANGLE(int Degrees,float Minutes, DIR Direction)
		{
		this -> Degrees = Degrees; 
		this -> Minutes = Minutes; 
		this -> Direction = Direction;};
		~ANGLE(){};
		void Display();
		void SetAngle(int Degrees, float Minutes, char Direction);
		char ConverEtoC(DIR Direction);
		void EnterAngle();
		
};
int main()
{
	ANGLE angle(-150,145,N), angle1;
	angle.Display();
	int Degrees;
	float Minutes;
	char dir = 0;
	char key = 0 ;
	do
	{
		cout<<"Degrees: ";
		cin >> Degrees;
		cout<<"Minutes: ";
		cin >> Minutes;
		cout<<"Direction: ";
		dir = getche();
		cout<<"\nYour angle: ";
		angle1.SetAngle(Degrees,Minutes,Direction);
		angle1.Display();
		cout<<"\nIf you want end, you need press ESC, else press any key..."<<endl;
		key = getch();
	}while(key!=27);
	system("pause");
	return 0;
}
void ANGLE::SetAngle(int Degrees,float Minutes, char Direction)
{
	this -> Degrees = Degrees;
	this -> Minutes = Minutes;
	switch(Direction)
	{
		case 'n': this -> Direction = N; 
		break;
		case 'e': this -> Direction = E; 
		break;
		case 's': this -> Direction = S; 
		break;
		case 'w': this -> Direction = W; 
		break;
		default: this -> Direction = N;
	}
}
char ANGLE::ConverEtoC(DIR Direction)
{
	return dirC[direction];
} 
void ANGLE::Display()
{
	cout<<Degrees<<'\xF8'<<Minutes<<"' "<<ConverEtoC(Direction)<<endl;
}
void ANGLE::EnterAngle()
{
	cout<<"Degrees: ";
	cin >> Degrees;
	cout<<"Minutes: ";
	cin>> Minutes;
	cout<<"Direction: ";
	char key = 0;
	key = getche();
	switch(key){
		case 'N':{
			Direction = N;
			break;
		}
		case 'S':{
			Direction = S;
			break;
		}
		case 'E':{
			Direction = E; 
			break;
		}
		case 'W':{
			Direction = W;
			break;
		}
		default:{
			cout<<"Sai du lieu!!!";
			break;
		}
	}
}
