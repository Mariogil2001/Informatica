#include <iostream>
#include <string>
#include <cctype>

using namespace std;
const int TAM = 26;
typedef float Vector[TAM];
void Frecuencia (string, Vector);


int main() 
{
	string texto;
	Vector f;
    cout << "Introduce un texto: " << endl;
    getline (cin, texto);
    for (int i = 0; i < texto.length(); i++) 
	{
		if (isalpha (texto[i]) == 0 )
			texto.erase(i,1); 
        if (texto[i] == ' ')
			texto.erase(i,1);
		texto[i] = tolower (texto[i]);
    }
	Frecuencia (texto, f);
		
    return 0;
}

void Frecuencia (string txt, Vector a)
{
	float t = 0, o = 0;
	for(int i = 0; i < txt.length() ; i++)
	{		
		if (txt[i] == 't')
			a[1]++;	
		if (txt[i] == 'o')
			a[2]++;				
		a[0]++;	
	}
	t = (a[1]/a[0] * 100) - 4.632;
	o = (a[2]/a[0] * 100) - 8.683;
	if (t < 0 || o > 0 )
		cout << "El texto esta en espanol." << endl;
	else
		cout << "El texto esta en ingles."<< endl;

return;
}
