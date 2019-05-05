#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main ()
{
	int num;
	
	
	do
	{
		int x = 1, y = 0;
		cout << "Please enter a number: ";
		cin >> num;
			if (num <= 0)
				cout << "Thank you!";
			else
			{
				do 
				{
				y = y + x;
				x= x+1;
				} while ( x <= num);
				cout << "The sum of all whole numbers from 1 to " << num <<" is " << y <<"." << endl;
			}
		
	} while (num > 0);
	
	getch();
	return 0;
}

