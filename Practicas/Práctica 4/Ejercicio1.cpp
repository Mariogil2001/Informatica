/**
 *
 * @file Ejercicio1.cpp
 *
 * @brief 
 *
 * Determinar si un n�mero es par o impar
 * Datos de entrada : Un n�mero real (valor_leido)
 * si resto del numero distinto de 0
 * 		entonces res es 1
 * 	si res es 1 el numero es impar
 * si no, es par
 * Datos de salida : Si el n�mero introducido es par o impar
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>
using namespace std;
int numeroImpar (int, bool); // L�nea a modificar
int main()
{
	int valor_leido;
	bool res;
	
	cout << " Introduce un valor: " << endl;
	cin >> valor_leido;
	
	res = numeroImpar ( valor_leido , res ); //L�nea a modificar
	if (res == true)
	
		cout << valor_leido << " es impar " << endl;
	
	else
	
		cout << valor_leido << " es par " << endl;
	
	system ( "pause" ); // He a�adido un system pause para que no se cierre el programa
	return 0;
	
}
// Esta funci�n determina si el n�mero que se le pasa como par�metro es impar 
int numeroImpar ( int valor,  bool res )
{
	res = false; // He quitado la declaraci�n de la variable porque me daba error y ponia [error] declaracion de 'bool res' shadows a parameter
	
	if ( valor % 2 != 0 )
	
		res = true;
	
	return res;
}
