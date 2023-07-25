/**
 *
 * @file Ejercicio4.cpp
 *
 * @brief 
 *
 * Invertir un número y decir si es capicúa o no
 * Datos de entrada : Un número real (n)
 * aplicar subprograma 'invertirnumero'
 * 	escribir numero invertido (numInv)
 * 	si n = numInv
 * 		entonces decir que es capicua
 * Datos de salida : El número invertido y si es capicua o no
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
#include <iostream>
#include <math.h>
using namespace std;
int r , n , b , numInv;
int invertirnumero ( long int a , long int b = 0 )
{
	if(a==0);
	else
	{
  		b = a % 10;
  		a = a / 10;
 		numInv = numInv * 10 + b % 10;
  return invertirnumero  ( a , b );
 	}
}
int main (){
	do{
	cout << "Ingrese numero:  (0 para terminar)" << endl;
   cin >> n;
   cout << "el numero invertido es " ;
   r = invertirnumero ( n , b );
   cout << numInv << endl;
   if(n == numInv && n != 0)
   {
   		cout << "El numero es capicua. IMPRESIONANTE" << endl;
   } 
   numInv = 0;
	} while (n > 0 );

   system( "pause" );
   return 0;
}








