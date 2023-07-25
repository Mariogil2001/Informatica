/**
 *
 * @file ejemplo1.cpp
 *
 * @brief 
 *
 * Determina la edad de una persona a partir del año de nacimiento.
 *
 * Datos de Entrada: año de nacimiento, entero positivo.
 *
 * Datos de Salida: la edad, entero positivo.
 *
 * @version 1.0
 * @author Elena Díaz
 * @date 29-09-2021
 *
 * @copyright Universidad de Valencia
 */


#include <iostream>
#include <string>

const unsigned short ANYO_ACTUAL = 2021;
  
using namespace std;

int main ()
{
    //DECLARACI?N DE VARIABLES
    string nombre;
    unsigned short anyo, edad;
    
    //ENTRADA DE DATOS
    cout << "Indica tu nombre: ";
    getline(cin, nombre);
    cout << "Indica tu anyo de nacimiento: ";
    cin >> anyo;
    
    //PROCESAMIENTO DE INFORMACION
    edad = ANYO_ACTUAL - anyo;
    
    //SALIDA DE RESULTADOS
    cout << "Tienes " << edad << " anyos." << endl;
    if (edad >= 18)
        cout << nombre << ", deberias disimular esas arrugas !!!" << endl;
    else
        cout << nombre << ", eso no se lo cree nadie !!!" << endl;    
        
    return 0;
}
