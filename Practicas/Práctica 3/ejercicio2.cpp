/**
 *
 * @file ejercicio2.cpp
 *
 * @brief 
 *
 * 
 * Indicar si un numero es divisible entre
 * 2, 3 ó 5, dando la posibilidad de poner varios números
 *
 *
 * Datos de Entrada:  Un número entero.
 * 
 * Datos de Salida: Indica si es divisible entre 2, 3 ó 5.
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 27-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
#include <iostream>
using namespace std;

int main(){
	int numero;

	do{
		cout<< " Introduce un numero (0 para salir)\n"; // Se ejecuta pase lo que pase
		cin >> numero;
			if(numero < 0 || numero == 0)
			{
			return 0; // Si el numero es negativo ó 0, este finaliza y no ejecuta nada mas
			}
		if(numero % 2 == 0) // Si el resto del numero es igual a 0, significa que es divisible por este número
			{
				cout << " El numero es divisible entre 2\n";	
			}
			if(numero % 3 == 0)
			{
				cout << " El numero es divisible entre 3\n";
			}
			if(numero % 5 == 0)
			{
				cout << " El numero es divisible entre 5\n"; // En vez de << endl se puede poner \n
			}
		}while(numero > 0);
		
	return 0;
	}



 
