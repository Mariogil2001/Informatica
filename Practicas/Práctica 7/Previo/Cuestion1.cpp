// Práctica 7. Cuestión 1

#include<iostream>
#include<string>

using namespace std;

int main()
{
	unsigned int cont = 0;
	string cad;
	
	cout << "Introduce una frase: " << endl;
	getline (cin, cad);
	
	for(int i = 1; i <= cad.length(); i++)
		if (cad[i] == ' ')
			cont++;
	
	cout << cad << " tiene " << cont << " espacios en blanco." << endl;
	
	return 0;		
}
