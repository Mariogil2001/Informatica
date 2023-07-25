/**
 *
 * @file ejercicio2.cpp
 *
 * @brief 
 *
 * Evalua la función x^3 en el dominio de los enteros, f: Z --> Z
 *
 * Datos de Entrada:  valor de x, entero.
 * 
 * Datos de Salida: el valor de la función, entero.
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 20-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
#include <iostream>

using namespace std;

int main() 
{
	
	short x, res;

	cout << "Este programa calcula el valor de x^3 en el dominio de los enteros." << endl;
	cout << "... Cuidado!. Contiene errores logicos y/o de ejecucion ..." << endl;
	
	cout << "Introduce el valor de x:" << endl;
	cin >> x;
	
	if(x>32 || x<-32)
	{
    	cout << " Error en el valor de x. El programa no esta disenado para procesar x^3 " << endl;
	}
	
	else
	{
		 res = x * x * x ;
    	cout << "El resultado de " << x << "^3 es: " <<  res << endl;
	}	

	return 0;
}

// El tipo de dato simple short no es capaz de procesar números superiores a +-32767, por lo que si pedimos el ^3 de un numero mayor a 32 o menos a -32, este dará error.
