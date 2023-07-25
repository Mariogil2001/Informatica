/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Datos de entrada : Un texto, palabra a buscar y la palabra con la que se reemplaza
 * Implementa una función ProcesarTexto que dado un texto busque
 * una palabra y la sustituya por otra. La función tiene que realizar tantas sustituciones como veces
 * aparezca la palabra que se busca. La función tiene como parámetros de entrada: el texto a
 * procesar, la palabra a buscar y la palabra con la que se remplaza. La función devuelve la cantidad
 * de sustituciones que se han realizado y el texto modificado.
 * Datos de salida : Una palabra sustituida
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 13-12-2021
 *
 * @copyright Universidad de Valencia
 */

#include<iostream>
#include<string>

using namespace std;
void ProcesarTexto (string, string, string);

int main()
{
	string Texto, Buscar, Reemplazar;
	cout << "Introduce texto a procesar: " << endl;
	getline(cin, Texto);
	cout << "Introduce palabra para buscar: " << endl;
	cin >> Buscar;
	cout << "Introduce palabra para reemplazar: " << endl;
	cin >> Reemplazar;
	ProcesarTexto (Texto, Buscar, Reemplazar);
		
	return 0;
} 

void ProcesarTexto (string frase, string buscar, string reemplazar)
{
	int pos = frase.find(buscar);
	while (pos != -1) // Es -1 porque no encuentra la palabra
	{
		frase.replace(pos, buscar.size(), reemplazar);
		pos = frase.find(buscar, pos + reemplazar.size());
	}
	
	cout << frase << endl;
	return;		
}
