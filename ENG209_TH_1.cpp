#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	int NumHours, Rate, ExRate, Bill;
	string Package;

	cout << "Which package have you purchased? (A/B/C) " ;
	cin >> Package;
	
	cout << "How many hours have you consumed? ";
	cin >> NumHours;

		
		if(Package == "A")
		{
		Rate = 995;
		ExRate = (NumHours-10)*20;
		if (NumHours <= 10)
			ExRate = 0;
		}
	else if (Package == "B")
		{
		Rate = 1495;
		ExRate = (NumHours-20)*10;
		if (NumHours <=20)
			ExRate = 0;
		}
	else if (Package == "C")
		{
		Rate = 1995;
		ExRate = 0;
		}
	
	Bill = Rate + ExRate;
	cout << "Your total bill: " << Bill;
	


getch();
return 0;


	
	
	
}
