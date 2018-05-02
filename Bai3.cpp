#include<iostream>
using namespace std;
class TIME 
{
	private:
		unsigned int Hours;
		unsigned int Minutes;
		unsigned int Seconds;
	public:
		TIME(){Hours = Minutes = Seconds = 0;}
		TIME(int Hours, int Minutes, int Seconds)
		{
		this -> Hours = Hours; 
		this -> Minutes = Minutes;
		this-> Seconds = Seconds;
		}
		~TIME(){}
		const void Display();
		TIME operator+(TIME) const;
		void Add(TIME,TIME); 
};
int main(){
  	const TIME t1(1,30,30),t2(8,20,30);
  	TIME t;
//	t.add(t1,t2);
	t = t1+t2;
	t.Display();
	system("pause");
	return 0 ;
}
const void TIME::Display()
{
	cout<<Hours<<":"<<Minutes<<":"<<Seconds<<endl;
}
void TIME::Add(TIME t1,TIME t2)
{
		Seconds = (t1.Seconds + t2.Seconds)%60;
		Minutes = (t1.Seconds + t2.Seconds)/60 + (t1.Minutes + t2.Minutes)%60; 
		Hours = (t1.Minutes + t2.Minutes)/60 + (t1.Hours+t2.Hours)%12;
}
TIME TIME::operator+(TIME t2) const
{
        int Sec, Min, Hou;
            Sec = (Seconds + t2.Seconds)%60;
			Min = (Seconds + t2.Seconds)/60 + (Minutes + t2.Minutes)%60;
			Hou = (Minutes + t2.Minutes)/60 + (Hours + t2.Hours)%12;
            return TIME(Hou, Min, Sec);
}
