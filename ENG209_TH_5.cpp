#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main ()
{
	int first = 0, second = 1, third;
	cout << first << "," << second << ",";
	do 
	{
		cout << third << ",";
		first = second;
		second = third;
		third = first + second;
	} while ( third <= 10946);
	
getch();	
return 0;
}
