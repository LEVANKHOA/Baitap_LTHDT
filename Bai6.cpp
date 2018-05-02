#include<iostream>
#include"date.h"
using namespace std;
enum etype 
{
	laboder,	// l
	secretary,	// s
	manager,	// m
	accountant,	// a
	executive,	// e
	researcher	// r
};
class Employee
{
	private:
		int NumberEmployee;
		float Compensation;
		etype _etype;
		Date date;
	public:
		Employee(){NumberEmployee = 0; Compensation = 0.0f;};
		~Employee(){};
		int GetEtype()
		{
			return _etype;
		}
		int GetNum()
		{
			return NumberEmployee;
		}
		float GetCom()
		{
			return Compensation;
		}
		void SetEtype(etype _etype)
		{
			this ->_etype = _etype;
		}
		void SetNum(int num)
		{
			this -> NumberEmployee = num;
		}
		void SetCom(int com)
		{
			this -> Compensation = com;
		}
		
		void EnterInfoEmployee();
		void Display();
};

int main()
{
	Employee e[3];
	for(int i = 0; i<3; ++i)
	{
		e[i].EnterInfoEmployee();
		cout<<endl;
	}
	cout<<"         *********************\n";
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
	cout<<"Employee type: ";
	switch(_etype)
	{
		case laboder:{
			cout<<"laboder";
			break;
		}
		case secretary:{
			cout<<"secretary";
			break;
		}	
		case manager:{
			cout<<"manager";
			break;
		}
		case accountant:{
			cout<<"accountant";		
			break;
		}
		case executive:{
			cout<<"executive";
			break;
		}
		case researcher:{
			cout<<"researcher";		
			break;
		}
	}
	cout<<endl;
	date.Display();
}
void Employee::EnterInfoEmployee(){
	cout<<"Enter NUMBER EMPLOYEE: "; 
	cin >> NumberEmployee;
	cout<<"Enter COMPENSATION: ";
	cin >> Compensation;
	cout<<"Enter DATE (dd/mm/yyyy):";
	char c;
	unsigned int Day, Month, Year;
	cin>> Day>> c>> Month>> c>> Year;
	cout<<"Enter ETYPE:";
	char key=0;
	cin>>key;
	switch(key){
		case 'l':{
			_etype=laboder;
			break;
		}
		case 's':{
			_etype = secretary;
			break;
		}	
		case 'm':{
			_etype = manager;
			break;
		}
		case 'a':{
			_etype = accountant;		
			break;
		}
		case 'e':{
			_etype = executive;
			break;
		}
		case 'r':{
			_etype = researcher;		
			break;
		}
	}
}
