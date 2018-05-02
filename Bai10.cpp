#include<iostream>
#include<windows.h>
#include<conio.h>
#include<mylib.h>
using namespace std;
enum DIR 
{
	N,
	S,
	E,
	W
};
char dirC[5] = {'N','S','E','W'};
class ANGLE {
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
		this -> Direction = Direction;
		};
		~ANGLE(){};
		void Display();
		char ConverEtoC(DIR Direction);
		void SetAngle(int Degrees,float Minutes, char Direction)
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
		void EnterAngle();
		
};

class OBJECT{
	private:
	 	static unsigned int Count;
	 	unsigned int Serial;
	public:
		OBJECT(){
			Count+=1;
			Serial = Count;
		}	
		void Answer();
};
class Ship{
	private:
		ANGLE Latitude;
		ANGLE Longitude;
		OBJECT NumberShip;
	public:
		Ship(){	};
		void EnterInfo();
		void Display();
};
int main()
{
	
	Ship sh1, sh2;
	cout<<"SH 1"<<endl;
	sh1.EnterInfo();
	cout<<"SH 2"<<endl;
	sh2.EnterInfo();
	
	sh1.Display();
	sh2.Display();
	
	system("pause");
	return 0;
}
void Ship::EnterInfo(){
	cout<<"Latitude: "<<endl;	
	Latitude.EnterAngle();
	cout<<"-------------"<<endl;
	cout<<"Longitude: "<<endl;
	Longitude.EnterAngle();
}
void Ship::Display(){
	cout<<"Position of Ship: ";
	Latitude.Display();
	Longitude.Display();
	NumberShip.Answer();
}
void OBJECT::Answer(){
	cout<<"I am object number "<<Serial<<endl;
}
unsigned int OBJECT::Count = 0;
char ANGLE::ConverEtoC(DIR direction){
	return dirC[direction];
} 
void ANGLE::Display(){
	cout<<Degrees<<'\xF8'<<Minutes<<"' "<<ConverEtoC(Direction);
}
void ANGLE::EnterAngle(){
	cout<<"Degrees: ";
	cin >> Degrees;
	cout<<"Minutes: ";
	cin>> Minutes;
	cout<<"Direction: ";
	char key = 0;
	int x = wherex();
	int y = wherey();
	do{
		key = getche();
		
		switch(key){
		case 'N':{
			Direction = N;
			key = 27;
			break;
		}
		case 'S':{
			Direction = S;
			key = 27;
			break;
		}
		case 'E':{
			Direction = E;
			key = 27; 
			break;
		}
		case 'W':{
			Direction = W;
			key = 27;
			break;
			}
		default:{
			gotoxy(x+10,1);			
			cout<<"Erro"<<endl;
			Sleep(1000);
			gotoxy(x,y);
			cout<<"     ";
			break;
			}
		}	
	}while(key!=27);
	
}

