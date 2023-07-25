// Redondear decenas

#include<iostream>

using namespace std;

int main ()
{
	int x = 85;
	do
	{
		x++;
	}while (x%10 != 0);
	cout << x << endl;
	return 0;
}
