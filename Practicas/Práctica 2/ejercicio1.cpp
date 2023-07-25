/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Calcula las soluciones de una ecuacion de segundo grado.
 * Contempla el caso de que exista dos soluciones, una o ninguna.
 * a x^2 + b x + c = 0
 *
 * Datos de Entrada:  los tres coeficientes de la ecuación.
 * 
 * Datos de Salida: las soluciones.
 *
 * @version 1.0
 * @author Mario GIl i Luis Petrisor
 * @date 20-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
#include <cmath>
#include <iostream>

using namespace std;

int main() 
{
	
	float a, c, b, x1 = 0, x2, disc;

	cout << "Este programa resuelve una ecuacion de segundo grado de la forma" << endl;
	cout << "a x^2 + b x + c = 0" << endl;
	cout << "... Cuidado!. Contiene errores logicos y de ejecucion ..." << endl;
	
	cout << "Introduce los tres coeficientes en orden (a, b, c)" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	
    disc = b * b - 4 * a * c;
    if(disc<0)
	{
	
    	cout << "Error en los valores de los coeficientes, la ecuacion no tiene solucion" << endl;
    }
    else
	{
	
		x1 = (-b + sqrt(disc)) / (2 * a);
   		x2 = (-b - sqrt(disc)) / (2 * a);
   	
    	cout << "Las raices son: " << endl;
		cout << x1 << " y " << x2;
	}
	return 0;
}

// El error lógico que hemos detectado es que en la línea 49, la fórmula se repetía para ambas raíces de la ecuación, 
// por lo que hemos cambiado el signo de la 2da para que nos dé los resultados reales.
