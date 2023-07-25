// Abrir un documento

#include<iostream>
#include<fstream>

using namespace std;
void Operaciones (string);
int main()
{
	ifstream f;
	string codigo;
	f.open("EAN13.txt");
	if (f.fail())
		cout << "Error al abrir el archivo." << endl;
	else 
		while (!f.eof())
		{
			getline(f,codigo);	
			Operaciones (codigo);
		}
	
	
	return 0;
}


