/**
 *
 * @file ejercicio4.cpp
 *
 * @brief 
 *
 * Convertir un numero decimal en binario
 * Datos de entrada : Un número real (n)
 * aplicar subprograma 'ImprimirBinario'
 * 		si el resto es 0, añadir o a la cadena
 * 		sino añadir 1
 * 	 	n = n / 2 si n > 0	
 * Datos de salida : El número en binario
 *
 * @version 1.0
 * @author Mario Gil 
 * @author Luis Petrisor
 * @date 16-01-2022
 *
 * @copyright Universidad de Valencia
 */
#include<iostream>
#include<math.h>
using namespace std;
void ImprimirBinario ( int );
int main()
{
	int decimal;
	cout << "Introduce numero en base decimal: ";
	cin >> decimal;
	ImprimirBinario (decimal);
	return 0;
}
void ImprimirBinario ( int num )
{	
	if (num >= 2)
	{
		ImprimirBinario (num/2); // Creamos una recursividad, en la que se aplicará el programa hasta que sea menor que 2
		cout << num % 2; // Como es binario, solo puede estar entre 0 y 1, por eso hacemos un cout de su resto
	}
	else 
		cout << num; // El ultimo numero que tiene que ser entre 0 y 1
	
return;
}

