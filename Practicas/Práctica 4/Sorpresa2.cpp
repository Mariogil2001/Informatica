/**
 *
 * @file Sorpresa2.cpp
 *
 * @brief 
 *
 * Un n�mero triangular es un n�mero que, al ser
 * representado por un conjunto de puntos equidistantes (tantos como el n�mero), puede
 * formar la figura de un tri�ngulo equil�tero.
 * Escribe una funci�n, Triangular, que
 * pas�ndole como dato de entrada un n�mero entero n, devuelva el valor Tn.
 * Datos de entrada : La cantidad de numeros triangulares
 * Introducir dato
 * Aplicar f�rmula para numero triangular tantas veces hasta llegar al numero deseado
 * Devolver cada numero triagunlar en el rango
 * Datos de salida : Numeros triangulares entre 0 y n
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
#include <iostream>
 using namespace std;
 int n , r ;
 int tiagulo (int)
 {
 		cout << "La sucesion de numeros triangulares sera: " << endl;
		for (int i = 1; i<=n; i++)
		{
		r = (i * ( i + 1)) / 2;
 		cout << r << endl;
		}
 
 	return r;
 }
 int main(){
 		do
		{
 			cout << "\n Introduce la cantidad de numeros para triangular: " ;
		 	cin >> n;
		} while(n<1);
		r = tiagulo (n);
		 
 		
		return 0;
 }
