/**
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 *
 * Conversor de segundos a horas, minutos y segundos
 * Datos de entrada : Numero (en segundos)
 * Introducir segundos
 * Aplicar "ConvertirT"
 * 		Restar 1 al numero hasta que su resto entre 3600 sea 0
 *			En cada resta, sumar 1 al contador i
 *		Horas = i / 3600
 *		Restar 1 al numero restante hasta que el resto entre 60 de 0
 *			En cada resta, sumar 1 al contador j
 * 		Minutos = i / 60
 *		Segundos = j
 *	Volver al programa principal y dar los datos obtenidos
 * Datos de salida : Horas, minutos y segundos
 *
 * @version 1.0
 * @author Mario Gil 
 * @author Luis Petrisor
 * @date 17-11-2021
 *
 * @copyright Universidad de Valencia
 */
#include<iostream>
using namespace std;
void ConvertirT (int ,int &, int &, int &); // Con unsigned int me daba error, preguntar clase
int main()
{
	int x, h, m, s;
	cout << "Introduce una cantidad en segundos: ";
	cin >> x;
	ConvertirT (x, h, m, s);
	cout << "\n\n" << h <<"h: " << m <<"m: " << s <<"s.";
	return 0;
}

void ConvertirT (int tiempo, int & horas, int & minutos, int & segundos)
{
	unsigned int i,j;
	for ( i = 0; tiempo % 3600 != 0; i++) // El tiempo introducido se va restando 1 hasta que es el resto entre 3600(1h) es 0
	{
		tiempo --; // Se va restando 1 hasta que sea divisible entero
	}
	
	horas = tiempo / 3600; // Las horas exactas es el tiempo restandole los minutos y segundos y dividiendolo entre 3600
	
	for (j = 0; i % 60 != 0; j++)
	{
		i--; // Repetimos el proceso anterior, pero ahora con los minutos
	}
	minutos = i / 60; // Los minutos seran el tiempo quitandole las horas y partido 60
	segundos = j; // Los segundos no hay que convertirlos a nada mas pequeño, por lo que se quedan igual
	return;
} 
