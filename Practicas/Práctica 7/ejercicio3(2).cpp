/**
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 *
 * Datos de entrada : Un texto
 * Implementa una funci�n Frecuencia que tenga como par�metro de
 * entrada un texto y devuelva como par�metro de salida el porcentaje de aparici�n de cada una de
 * las letras del abecedario ingl�s sin contar s�mbolos ortogr�ficos ni d�gitos ni caracteres en blanco
 * (cuesti�n 3 de prerrequisitos). No si distingue entre may�sculas y min�sculas (funci�n
 * tolower()).
 * Datos de salida : Si el texto esta en espa�ol o en ingles, junto a su frecuencia
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
