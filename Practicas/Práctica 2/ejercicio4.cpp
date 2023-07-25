/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Programa para calcular la estacion del año
 * según el dia
 *
 * Datos de Entrada:  Dia del año
 * 
 * Datos de Salida: la estacion correspondiente
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 20-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
#include <cmath>
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << " Introduzca un dia del ano "<< endl;
	cin >> n;
	
   	if(0<n<89 || 355<n<365)
   		cout << "El dia "<< n <<" Es Invierno " << endl;
   	else if(89<n<182)
   		cout << "El dia "<< n <<" Es Primavera " << endl;
   	else if(182<n<274)
   		cout << "El dia "<< n <<" Es Verano " << endl;
   	else if(274<n<355)
   		cout << "El dia "<< n <<" Es Otono " << endl;
	

	return 0;
}
