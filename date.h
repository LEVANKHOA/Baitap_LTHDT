#pragma
#include<iostream>
using namespace std;
struct date
{
	int Day;
	int Month;
	int Year;
};
class Date
{
	private:
		unsigned	int Day;
		unsigned	int Month;
		unsigned	int Year;
	public:
		Date()
		{
		Day = 0; Month = 0; Year = 0;
		}
		unsigned int GetDay()
		{
			return Day;
		}
		unsigned int GetMonth(){
			return Month;
		}
		unsigned int GetYear()
		{
			return Year;
		}
		void SetDay(unsigned int Day)
		{
			this -> Day = Day;
		}
		void SetMonth(unsigned int Month)
		{
			this -> Month = Month;
		}
		void SetYear(unsigned int Year)
		{
			this-> Year = Year;
		}
		void GetDate(date);
		bool Check(date);
		void Display();
};
void Date::Display()
{
	cout<<Day<<"/"<<Month<<"/"<<Year<<endl;
}
void Date::GetDate(date d)
{
	if(Check(d))
	{
		this -> Day = d.Day;
		this -> Month = d.Month;
		this -> Year = d.Year;
	}
	else
	{
		this -> Day = 0;
		this -> Month = 0;
		this -> Year = 0;
	}
}
bool Date::Check(date d)
{
	if(d.Day < 0 || d.Month < 0|| d.Year < 0)
	{
		cout<<"Ngay hoac Thang hoac Nam sai\n";
		return false;
	}
	switch(d.Month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: if(d.Day > 31) {cout<<"Ngay sai\n";return false;} break;
		case 4: case 6: case 9: case 11: if(d.Day > 30) {cout<<"Ngay sai\n";return false;} break;
		case 2: if(d.Year%4==0)// nhuan
				{
					if(d.Day > 29)
					{
						cout<<"Ngay sai (<=29)\n";
						return false;
					}
					
				}
				else
					if(d.Day > 28) 
					{
						cout<<"Ngay sai (<=28)\n"<<d.Year % 4<<"\n" ;
						return false;
					}
				break;
		default: cout<<"Thang sai\n"; return false;
	}
	return true;
}
