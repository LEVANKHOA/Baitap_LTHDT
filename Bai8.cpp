#include<iostream>
using namespace std;
class OBJECT
{
	private:
	 	static unsigned int Count;
	 	unsigned int Serial;
	public:
		OBJECT()
		{
			Count+=1;
			Serial = Count;
		}	
		void Answer();
};
int main()
{
	OBJECT O1,O2,O3;
	O1.Answer();
	O2.Answer();
	O3.Answer();
	system("pause");
	return 0;
}
void OBJECT::Answer()
{
	cout<<"I am object number: "<< Serial<<endl;
}
unsigned int OBJECT::Count = 0;
