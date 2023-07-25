/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Datos de entrada : TAM elementos  
 *	Introducimos TAM elementos en un vector
 *		Para i = 0, siendo i menor o igual a TAM, i aumenta en 1
 *			El resultado sera la suma del resultado anterior mas el elemento numero i del vector
 *		Mostramos el resultado por pantalla		
 * Datos de salida : La suma de los elementos del vector
 *
 * @version 1.0
 * @author Mario Gil 
 * @author Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
#include <iostream>
using namespace std;
const unsigned int TAM = 4;
typedef float VectorF[TAM];
void leeVector ( VectorF ); // Línea a modificar
float sumaVector ( const VectorF );

int main()
{
	
	VectorF v;
	float suma;
	leeVector (v); // Línea a modificar
	suma = sumaVector (v); // Línea a modificar
	cout << "Los elementos del vector suman " << suma << endl;
	
	return 0;	
}

void leeVector ( VectorF w) // Introducimos los datos w en el VectorF
{
	cout << "Introduce los elementos del vector:" << endl;
	for (unsigned int i = 0; i < TAM; i ++ )
	{
		cout << "elemento(" << i << ")? ";
		cin >> w[i];
	}
	
return;

}

float sumaVector ( const VectorF u ) // Línea a modificar
{
	float res = 0.0;
	for (unsigned int i = 0; i <= TAM; i ++ ) // Línea a modificar
		res = res + u[i];
	return res;
	
}











