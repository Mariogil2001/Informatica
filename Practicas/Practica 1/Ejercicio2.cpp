/*
 *
 * @file ejercicio2.cpp
 *
 * @brief 
 *
 * Determina la diferencia de dos numeros.
 * 
 * Datos de Entrada: los numeros, real.
 *
 * Datos de Salida: la diferencia, real.
 *
 * @version 1.0
 * @author Luis Petrisor i Mario Gil
 * @date 06-10-2021
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	double c1 = 0.1000000003;
	double c2 = 0.1000000005;
	double dif;
	
	dif= c2 - c1;
	cout << " La diferencia es "<< dif << endl;
	return 0;
}
// El pseudocodigo
// Introducir los numeros reales
// Calcular la diferencia
// Decir diferencia
// Final


