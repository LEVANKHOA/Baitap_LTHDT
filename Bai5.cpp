#include<iostream>
#include"date.h"
// su dung thu vien date.h ( da khoi tao class trong do ) cho cac bai 5, 6.
using namespace std;
int main()
{
	Date dte;
	date dta;
	char c;
	dta.Day = 10;
	dta.Month = 10;
	dta.Year = 1990;
	dte.GetDate(dta);
	dte.Display();
	system("pause");
	return 0;
}
