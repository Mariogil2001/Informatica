/**
 *
 * @file ejercicio2.cpp
 *
 * @brief 
 *
 * Muestra algunos de los problemas que pueden ocurrir al manipular vectores 
 * de forma inadecuada y corromper la memoria.
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 1-12-2021
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const unsigned int TAM = 5;
/**
*
* @brief Definicion de tipo de dato Vector de tamaño cinco elementos de tipo entero
*
* @typedef Vector
*/
typedef int Vector [TAM];

void crear (Vector, unsigned int &);
void mostrar (const Vector, unsigned int);
void sort (Vector, unsigned int);
void test ();

int main ()
{
	cout << "Inicio" << endl;
	test ();
	cout << "Fin" << endl;
	
  	return 0;
}

/**
 *
 * Crea una variable tipo Vector, lo rellena con numeros enteros aleatorios
 * y lo ordena de menor a mayor.
 *
 */
void test()
{
	Vector v;
	unsigned int tam;
    	
	crear (v, tam);	
	
	cout << "Vector original: " << endl;
	mostrar (v, tam); //punto de ruptura
	
  	sort (v, tam);

    cout << "Vector ordenado: " << endl;
	mostrar (v, tam); //punto de ruptura
	
	return;
}

/**
 *
 * Ordena los elementos de un vector de menor a mayor.
 *
 * @param [in,out] a el vector sin ordenar y el vector ordenado
 * @param [in] t la cantidad real de elementos rellenados
 *
 */
void sort (Vector a, unsigned int t)
{
	unsigned int i, j;
	int tmp;

  	for (i = 1; i < t; i++)
 	{
    	j = i;
     	tmp = a[i];
     	while (j > 0 && tmp < a[j - 1])
     	{
           a[j] = a[j - 1];
           j--;
     	}
    	a[j] = tmp;
 	}

	return;
}

/**
 *
 * Rellena los elementos de un vector con numeros aleatorios.
 *
 * @param [out] a el vector rellenado
 * @param [out] t la cantidad real de elementos rellenados
 *
 */
void crear (Vector a, unsigned int & t)	    
{
  	srand(time(NULL)); 

    cout << "Introduce la cantidad de elementos que deseas utilizar:" << endl;
	cin >> t;
		
	for (unsigned int i = 0; i < t; i ++ )
		a[i] = rand() % 10;;
	
	return;
}

/**
 *
 * Imprime el vector por pantalla.
 *
 * @param [in] a el vector 
 * @param [in] t la cantidad real de elementos rellenados
 *
 */
void mostrar (const Vector a, unsigned int t)
{
	unsigned int i;
	
	cout << "(";
	
	for (i = 0; i < t - 1; i++ )
		cout << a[i] << ",";
	
	cout << a[i] << ")" << endl; //ultimo elemento

	return;
}

