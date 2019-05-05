#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main ()
{
	int x = 0;
	do 
	{
		cout << x << ",";
		x= x+1;
	} while ( x<10);
	
	do 
	{
		cout << x << ",";
		x= x + 2;
	} while ( x<30);
	
	do
	{
		cout << x;
		x=x+2;
	} while (x==30);
	
getch();
return 0;
}
