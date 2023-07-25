/**
 *
 * @file Ejercicio1.cpp
 *
 * @brief 
 *
 * Calcula la formula cuadratica
 * Datos de entrada : Un número real (valor_leido)
 * si resto del numero distinto de 0
 * 		entonces res es 1
 * 	si res es 1 el numero es impar
 * si no, es par
 * Datos de salida : Si el número introducido es par o impar
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
#include <iostream>
#include <cmath>

using namespace std;

void Raices (float &, float &, float, float, float); //Añadimos & porque es un parametro por referencia

int main()
{	
  float c0, c1, c2, r1, r2; //coeficientes y raices de la ecuacion

  cout << "Introduce los coeficientes c0 + c1*x + c2 *x*x:" << endl;
  cin >> c0 >> c1 >> c2;

  Raices (r1, r2, c0, c1, c2); // No hace falta poner el & porque lo hemos declarado en el prototipo de la función

  cout << "Las raíces dson: " << r1 << " y " << r2 << endl;

  return 0;
}


void Raices (float & raiz1, float & raiz2, float a, float b, float c) // Añadimos el & para que el resultado se devuelva a la función principal
{ 

    float discriminante;
  
    discriminante = sqrt ( b * b - 4.0 * a * c );
    raiz1 = ( -b + discriminante ) / ( 2.0 * a );
    raiz2 = ( -b - discriminante ) / ( 2.0 * a );
}
