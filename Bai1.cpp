#include<iostream>
using namespace std;
class Int
{
	private:
	public:
		Int():value(0){}
		Int(int n){value = n;}
		int GetInf(){return value;}
		void SetInf(int n){ value = n;}
		void ShowInfo();
		void Sum(Int,Int);
};
int main()
{
	Int a(10),b(20);
	Int c;
	c.Sum(a,b);
	a.ShowInfo();
	b.ShowInfo();
    c.ShowInfo();
	return 0;
}
void Int::ShowInfo()
{
	 cout<< value <<endl;
}
void Int::Sum(Int a,Int b)
{
	value = a.GetInf()+b.GetInf();
}
