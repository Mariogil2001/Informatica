/*
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Determina la superficie de un cubo (m^2) y su volumen (m^3).
 * 
 * Datos de Entrada: el lado del cubo, real.
 *
 * Datos de Salida: la superficie y el volumen, real.
 *
 * @version 1.0
 * @author Luis Petrisor i Mario Gil
 * @date 06-10-2021
 *
 * @copyright Universidad de Valencia
 */


#include <iostream>

using namespace std;

/* Funcion principal */
int main()
{
  float lado, superficie, volumen;

  cout << "Introduce el valor del lado (en m):" << endl;
  cin >> lado;
  
  superficie =  6 * lado * lado;
  volumen = lado * lado * lado;
  
  cout << " La superficie de un cubo de lado " << lado  <<  " es (m^2): " << superficie << endl;
  cout << " El volumen del cubo de lado " << lado << " es (m^3): "<< volumen << endl;

  return 0;
}
// El pseudocodigo 
// Preguntar valor lado
// Leer lado
// Calcular superficie y volumen
// Decir resultado superficie y resultado volumen
// Final
