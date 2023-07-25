/**
 *
 * @file sorpresa2.cpp
 *
 * @brief 
 *
 * Calcula la cantidad de cifras de un numero entero. 
 * Contiene Errores.
 * 
 * Datos de Entrada: el numero.
 *
 * Datos de Salida: la cantidad de cifras.
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 27-10-2021
 *
 * @copyright Universidad de Valencia
 */
#include<iostream>
using namespace std;
int main (){
	int a;
	int c = 1;
	cout << "Introducir altura de la T: " << endl;
	cin >> a;
	do
	{
		cout << "Introducir altura de la T: " << endl;
		cin >> a;
		for (int i = 1; i<=a; i++)
		{
			
			if(a%2 != 0 && 3<a<25)
			{
				if(c == 1)
				{
					cout << "******" << endl;
					c = 0;
				}
				cout << "  *  " << endl;
				
			}			
		}
	} while (a%2 == 0 || 3>a || 25<a);
	
	
	
	return 0;
}
