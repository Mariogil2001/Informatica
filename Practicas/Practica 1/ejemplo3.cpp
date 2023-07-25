/**
 *
 * @file ejemplo3.cpp
 *
 * @brief 
 *
 * Determina las soluciones de una ecuación de segundo grado.
 * Datos de Entrada: los coeficientes de la ecuacion, reales.
 *
 * Datos de Salida: las soluciones de la ecuacion, reales.
 *
 * @version 1.0
 * @author Elena Díaz
 * @date 29-09-2021
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    float a, b, c; //coeficientes
    float discr; //discriminante
    float x1, x2; //soluciones
    
    //ENTRADA, prueba con 2,5,1
    cout << "Resolucion de una ecuacion de 2o. grado" << endl;
    cout << "en la forma Ax2 + Bx + C = 0" << endl;
    cout << "Introducir a continuacion el valor de los coeficientes A, B, C." << endl;
    cout << "Coeficiente A: ";
    cin >> a;
    cout << "Coeficiente B: ";
    cin >> b;
    cout << "Coeficiente C: ";
    cin >> c;
    
    //CALCULO DE SOLUCIONES
    discr = b*b - 4 * a * c;
    x1 = -b + sqrt (discr) / (2*a);
    x2 = -b - sqrt (discr) / (2*a);
    
    //SALIDA DE RESULTADOS 
    cout << "Las soluciones a la ecuacion son:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
     
    return 0;
}
