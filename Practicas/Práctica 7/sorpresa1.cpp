/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Datos de entrada : Un texto
 * Implementa un programa en C++ que lea una frase desde el teclado, llame a la función anterior
 * para cada una de las palabras que la componen y se imprima el resultado.
 * Datos de salida : El numero de consonantes
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 13-12-2021
 *
 * @copyright Universidad de Valencia
 */

#include<iostream>
#include<string>

using namespace std;
string ContarConsonantes (string);

int main()
{
	string txt,s, palabra;
	
	cout << "Introduce un texto: " << endl;
	getline(cin, txt);
	for(int i = 0; i < txt.length(); i++)
	{
		palabra = txt.substr(0, ' '); 
		txt.erase(0,' ' );
		cout << palabra << endl;  
	} 
	
	
	

}

string ContarConsonantes(string texto)
{

}
