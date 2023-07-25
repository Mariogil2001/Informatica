#include <iostream>
#include <string>
using namespace std;
 
 
int main() 
{
	string texto;
    cout << "Introduce un texto: " << endl;
    getline(cin, texto);
 
    for (int i = 0; i < texto.length(); i++) {
        texto[i] = tolower(texto[i]);
    }
 
    cout << "Cadena en minusculas: " << texto << endl;
}
