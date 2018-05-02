#include<iostream>
using namespace std;
class Employee
{
	private:
		int NumberEmployee;
		float Compensation;
	public:
		Employee(){NumberEmployee = 0; Compensation = 0.0f;};
		~Employee(){};
		int GetNum()
		{
			return NumberEmployee;
		}
		float GetCom()
		{
			return Compensation;
		}
		void SetNum(int num)
		{
			this -> NumberEmployee = num;
		}
		void SetCom(int com)
		{
			this -> Compensation = com;
		}
		void Display();
};
int main()
{
	Employee e[3];
	int NumberEmployee = 0;
	float Compensation = 0;
	for(int i = 0; i<3; ++i)
	{
		cout<<"Enter NUMBER EMPLOYEE ["<<i<<"]: ";
		cin>>NumberEmployee;
		e[i].SetNum(NumberEmployee);
		cout<<"Enter COMPENSATION ["<<i<<"]: ";
		cin>>Compensation;
		e[i].SetCom(Compensation);
		cout<<endl;
	}
	for(int i = 0; i<3; ++i)
	{
		e[i].Display();
		cout<<endl;
	}
	system("pause");
	return 0;
}
void Employee::Display() 
{
	cout<<"Number Employee: "<<NumberEmployee<<endl;
	cout<<"Compensation Employee: "<<Compensation<<"\n";
	cout<<endl;
}
