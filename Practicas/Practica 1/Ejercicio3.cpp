/*
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 *
 * Determina la cantidad de caldo y tiempo de coccion.
 * 
 * Datos de Entrada: el numero de comensales, real.
 *
 * Datos de Salida: caldo y tiempo, real.
 *
 * @version 1.0
 * @author Luis Petrisor i Mario Gil
 * @date 06-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
 #include <iostream>
 
 using namespace std;
 int main(){
 	float comensales, caldo, tiempo;

  cout << "Introduce el numero de comensales:" << endl;
  cin >> comensales;
 
  caldo = comensales * 0.3;
  tiempo = caldo * 10;
  
  cout << " Para " << comensales  <<  " comensales se pondra " << caldo << " litros de caldo y tardara "<< tiempo << " minutos de coccion " << endl;


  return 0;
 }
 
 // El pseudocodigo
 // Establecer variables, comensales, caldo, tiempo
 // Leer comensales
 // Calcular caldo y tiempo
 // Decir tiempo y cantidad de caldo
 // Final
