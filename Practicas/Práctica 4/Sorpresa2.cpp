/**
 *
 * @file Sorpresa2.cpp
 *
 * @brief 
 *
 * Un número triangular es un número que, al ser
 * representado por un conjunto de puntos equidistantes (tantos como el número), puede
 * formar la figura de un triángulo equilátero.
 * Escribe una función, Triangular, que
 * pasándole como dato de entrada un número entero n, devuelva el valor Tn.
 * Datos de entrada : La cantidad de numeros triangulares
 * Introducir dato
 * Aplicar fórmula para numero triangular tantas veces hasta llegar al numero deseado
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
