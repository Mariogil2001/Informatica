/**
 *
 * @file ejercicio4.cpp
 *
 * @brief 
 *
 * Datos de entrada : Un numero en morse
 * Implementa una función Descodifica que dada una cadena de caracteres en código Morse
 * devuelva el número entero equivalente en base decimal.
 * Datos de salida : Un numero en decimal
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 13-12-2021
 *
 * @copyright Universidad de Valencia
 */

#include<iostream>
#include<string>

using namespace std;
void Descodifica(string);

int main()
{
	string morse,l;
	int a = 0;
	cout << "Introduce un numero a descodificar: " << endl;
	getline(cin,morse);
	do
	{
		l = morse.substr(0,10);
		morse.erase(0,10);
		a = morse.length();   		
		Descodifica(l);
	}while (a>0);
	
	return 0;
}

void Descodifica (string m)
{
	string s;
	for ( int i = 0; i < m.length(); i = i + 5)
	{
		if ( m.substr(i, i + 5) == "-----")
		{
			m.erase(0,i);	
			cout << "0"; 	
		}
	if ( m.substr(i, i + 5) == "----.")
		{
			m.erase(0,i);	
			cout << "9"; 	
		}
	if ( m.substr(i, i + 5) == "---..")
		{
			m.erase(0,i);	
			cout << "8"; 	
			}	
	if ( m.substr(i, i + 5) == "--...")
			{
			m.erase(0,i);	
			cout << "7"; 	
			}
	if ( m.substr(i, i + 5) == "-....")
			{
			m.erase(0,i);	
			cout << "6"; 	
			}	
	if ( m.substr(i, i + 5) == ".....")
			{
			m.erase(0,i);	
			cout << "5"; 	
			}		
	if ( m.substr(i, i + 5) == "....-")
			{
			m.erase(0,i);	
			cout << "4"; 	
			}
	if ( m.substr(i, i + 5) == "...--")
			{
			m.erase(0,i);	
			cout << "3"; 	
			}	
	if ( m.substr(i, i + 5) == "..---")
			{
			m.erase(0,i);	
			cout << "2"; 	
			}		
	if ( m.substr(i, i + 5) == ".----")
			{
			m.erase(0,i);	
			cout << "1"; 	
			}				
		}	
	return;
}
