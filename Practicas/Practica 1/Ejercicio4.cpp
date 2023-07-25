/*
 *
 * @file ejercicio4.cpp
 *
 * @brief 
 *
 * Determina la diferencia de dos numeros.
 * 
 * Datos de Entrada: los numeros, real.
 *
 * Datos de Salida: la diferencia, real.
 *
 * @version 1.0
 * @author Luis Petrisor i Mario Gil
 * @date 06-10-2021
 *
 * @copyright Universidad de Valencia
 */

 #include <iostream>
 
 using namespace std;
 int main()
 {
 	
	 float libras, dolares, euros;
	 float dinero;
	 
	 cout << "Introduce el dinero a la institucion benefica " << endl;
	 cout << "Donacion en libras " << endl;
	 cin >> libras;
	 cout << "Donacion en dolares " << endl;
	 cin >> dolares;
	 cout << "Donacion en euros " << endl;
	 cin >> euros;
	 
	 dinero = (libras * 1.17) + (dolares * 0.87) + euros;
	 
	 float salud , ninos, gastos;
	 
	 salud = 0.6 * dinero;
	 ninos = 0.35 * dinero;
	 gastos = 0.05 * dinero;
	 cout <<"En total se han recaudado " << dinero<< " euros, de los cuales " <<salud<< " se destinaran a un centro de salud, " <<ninos<< " para un centro de ninos y "<<gastos<< " para gastos administrativos "<<endl;
	 return 0;
 
 }
 // El pseudocodigo
 // Crear libras, dolares, euros y dinero
 // Decir introduce cantidad en cada divisa
 // Leer cada dato
 // Calcular dinero total
 // Crear salud, ninos, gastos
 // Decir el total y el dinero repartido
 // Final
