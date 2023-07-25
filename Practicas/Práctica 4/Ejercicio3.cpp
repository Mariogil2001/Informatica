/**
 *
 * @file Ejercicio3.cpp
 *
 * @brief 
 *
 * Ingresar un número y decir cual es el mayor
 * Datos de entrada : 4 números reales (a,b,c,d)
 * 	Ingresar 4 números
 * 	aplicar subprograma 'comparar'
 * 	
 * 		
 * Datos de salida : El número mayor
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
#include <iostream>
using namespace std;
int a , b , c , d , r;
int comparar (int, int, int, int);
int main(){
		cout << "Ingrese un numero: " << endl;
		cin >> a;
		cout << "Ingrese un numero: " << endl;
		cin >> b;
		cout << "Ingrese un numero: " << endl;
		cin >> c;
		cout << "Ingrese un numero: " << endl;
		cin >> d;
		r = comparar(a,b,c,d);
	
	cout << "El numero mayor es " << r;
	cout << "\n";
	system ("pause");
	return 0;
}

int comparar (int a,int b, int c, int d)
{
	if (a > b || a > c || a > d )
	{
		return a;
	}
	if(b > a || b > c || b > d )
	{
		return b;
	}
	if (c > a || c > b || c > d )
	{
		return c;
	}
	if (d > a || d > b || d > c )
	{
		return d;
	}
}
