/**
 *
 * @file ejercicio1.cpp
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

#include <iostream>

using namespace std;

int main() 
{
   unsigned int n, num;
   unsigned short digito = 0, c = 0;
   
   cout << "Cuidado contienre errores!. Introduce un numero:" << endl;
   cin >> n;
   
   num = n;
   
   while (num > 10)
   {
      digito = num % 10;
      c++;
      num = num / 10;
   } 
    c++;
   cout << "La cantidad de cifras de " << n << " es: " << c << endl;
      
   return 0;
}
