#include<iostream>
#include<conio.h>
using namespace std;
class ToolBooth
{
	private:
		unsigned TotalNumberCar;
		float TotalAmount;
	public:
		ToolBooth(){ TotalNumberCar = 0; TotalAmount = 0.0f;}
		ToolBooth(int TotalNumberCar, float TotalAmount)
		{
			this->TotalNumberCar = TotalNumberCar;
			this->TotalAmount = TotalAmount;
		}
		void PayingCar();
		void NopayCar();
		void Display();
};
int main()
{
	ToolBooth bot;
	int dem = 0;
	char key = 0;
	cout<<"<> Nhan phim T cho xe thu phi qua.\n";
	cout<<"<> Nhan phim M cho xe mien phi qua.\n";
	int x, y;
	do
	{
		if(kbhit())
		{
			key= getch();
			switch(key)
			{
				case 't':
				{
					system("cls");
					cout<<"<> Nhan phim T cho xe thu phi qua.\n";
					cout<<"<> Nhan phim M cho xe mien phi qua.\n";
					cout<<"<> Da thu phi cua xe.\n";
					bot.PayingCar();
					break;
				}
				case 'm':
				{
					system("cls");
					cout<<"<> Nhan phim T cho xe thu phi qua.\n";
					cout<<"<> Nhan phim M cho xe mien phi qua.\n";
					cout<<"<> Mien phi.\n";
					bot.NopayCar();
					break;
				}
			}
		}
	}while(key!=27);
	
	bot.Display();
	
	system("pause");
	return 0;
}
void ToolBooth::Display()
{
	cout<<"         *********************        "<<endl;
	cout<<"<> Total Number Car: "<<TotalNumberCar<<endl;
	cout<<"<> Total Amount: "<<TotalAmount<<endl;
}
void ToolBooth::NopayCar()
{
	++TotalNumberCar;
}
void ToolBooth::PayingCar()
{
	++TotalNumberCar;
	TotalAmount += 0.5;
}
