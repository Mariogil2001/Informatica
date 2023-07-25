/**
 *
 * @file ejercicio2.cpp
 *
 * @brief 
 *
 * Muestra el uso de las variables referencia de C++
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

void Intercambia( int &, int &);

int main()
{
	int a, b;
	int & x = a;
	
	a = 5;
	x = x * 10; 
	
	int y  = a;
	y = y * 10;
	
	cout << "a = " << a << ", x = " << x << ", y = " << y << endl;
	cout << "Stop in Main" << endl;
	
	Intercambia(a, y);
	
	cout << "a = " << a << ", x = " << x << ", y = " << y << endl;
	cout << "Stop in Main" << endl;

	return 0;
}

/**
 *
 * Intercambia el valor de los parámetros
 *
 * @param [in,out] p primera variable
 * @param [in,out] q segunda variable
 *
 */
void Intercambia( int & p, int & q)
{	
	int aux;
	
	aux = p;
	p = q;
	q = aux;
	cout << "Stop in Intercambia" << endl;
	
	return;
}
