/**
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 *
 * Datos de entrada : Un texto
 * Implementa una función Frecuencia que tenga como parámetro de
 * entrada un texto y devuelva como parámetro de salida el porcentaje de aparición de cada una de
 * las letras del abecedario inglés sin contar símbolos ortográficos ni dígitos ni caracteres en blanco
 * (cuestión 3 de prerrequisitos). No si distingue entre mayúsculas y minúsculas (función
 * tolower()).
 * Datos de salida : Si el texto esta en español o en ingles, junto a su frecuencia
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 15-12-2021
 *
 * @copyright Universidad de Valencia
 */
 
#include<iostream>
#include<string>

using namespace std;
const unsigned short TAM = 26;
typedef float Vector [TAM];
void Frecuencia (string, Vector);

int main()
{
	string txt;
	Vector f;
	
	cout << "Introduce un texto: " << endl;
	getline(cin, txt);
	for (int i = 0; i < txt.length(); i++) 
	{
		
    }
    Frecuencia (txt,f);
    
	return 0;
}  

void Frecuencia( string texto, Vector a)
{
	int cont = 0;
	char letra,let;
	for (int j = 0; j < TAM; j++ )
	{
		a[j] = 0;
		
	}
	for (int i = 0; i < texto.length(); i++)
	{
		letra = tolower (texto[i]);
		if(letra >= 'a' && letra <= 'z')
		{
			a[letra - 'a']++;	
			cont++;
		}
	}
	for (int i = 0; i < TAM; i++) 
	{
		let = 'a' + i;
		a[i] = a[i] / cont;
		cout << let << " : " << a[i] << endl;
	}
	
	
	return;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
