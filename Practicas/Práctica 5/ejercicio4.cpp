/**
 *
 * @file ejercicio4.cpp
 *
 * @brief 
 *
 * Convertir un numero decimal en binario
 * Datos de entrada : Un número real en base decimal (n)
 * Introducimos un numero en base decimal
 * Aplicamos el subprograma 'BitImpresion'		
 * 		Si el numero es mayor o igual a 2
 *			Aplicamos el subprograma 'BitImpresion'
 *			Enseñamos el resto del numero
 *		Sino mostramos el numero
 *	Finsi
 * 	Fin 	
 * Datos de salida: El número en binario
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
void BitImpresion (int);
int main()
{
	int n;
	cout << "Introduce numero en base decimal: ";
	cin >> n;
	BitImpresion (n);
	return 0;
}
void BitImpresion (int n)
{
	if (n >= 2)
	{
		BitImpresion (n/2); // Creamos una recursividad hasta que el numero sea menor de 2
		cout << n % 2; // Hacemos un cout del resto para sacar el numero
	}
	else
		cout << n; // Hacemos un cout del ultimo numero
	
	return;	
	
}

