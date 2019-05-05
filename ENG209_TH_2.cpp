#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main ()
{
	double gallon, bill, total;
	char late;
	
	cout << "Number of Gallons: ";
	cin >> gallon;
	cout << "Late payment or not? (Y / N): ";
	cin >> late ;
	
	bill = gallon * 1.10;
	total = bill + 35.0;
	switch (late)
	{
		case 'Y': cout << " Total Bill: " << total + 20 << endl;
				break;
		case 'N': cout << " Total Bill: " << total << endl;
				break;
	}
	system("pause");
	getch();
	return 0;
}
