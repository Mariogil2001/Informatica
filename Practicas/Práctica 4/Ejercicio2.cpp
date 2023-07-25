/**
 *
 * @file Ejercicio1cpp
 *
 * @brief 
 *
 * Calcula el numero combinatorio de m en n.
 * Número de subconjuntos de n elementos escogidos 
 * de un conjunto con m elementos. 
 * ¡Cuidado contiene errores!
 * ( n! ) / ( m! (n - m)! )
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 09-11-2021
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>
#include <cwchar> // para imprimir acentos, en general, símbolos del castellano.
#include <clocale> // para imprimir acentos, en general, símbolos del castellano.

using namespace std;

unsigned int NCombinatorio (unsigned int, unsigned int);

unsigned int Factorial (unsigned int);


int main()
{	
	unsigned int res = 0, m, n;

	setlocale (LC_CTYPE, "Spanish"); //para poder imprimir símbolos del castellano: acentos, ñ, ...
	
	// entrada de datos
	cout << "Este programa calcula el coeficiente binomial de m en n." << endl;
	cout << "¡Cuidado contiene errores de ejecución! \n\n";
	cout << "Introduce el valor de m: " << endl;
	cin >> m;
	cout << "Introduce el valor de n: " << endl;
	cin >> n;
	
	//procesado
 	res = NCombinatorio ( m, n );
  
  	//salida de resultados
 	cout << "El número combinatorio de " << m << " en " << n << " es:" << endl;
	cout << res << endl;      
 	system ("pause");
 	return 0;   
}

/**
 *
 * Calcula el factorial de un número
 *
 * @param [in] p el número
 *
 * @return el factorial 
 *
 */
unsigned int Factorial (unsigned int p)
{
	unsigned int i, r = 1;   

	for (i = 2; i <= p; i++)
		r *= i;
  
  	return r;
}

/**
 *
 * Calcula el numero combinatorio (t 
 *								   k).
 * Número de subconjuntos de k elementos escogidos 
 * de un conjunto con t elementos.
 *
 * @param [in] t el número de elementos del conjunto.
 * @param [in] k el número de elementos de los subconjuntos.
 *
 * @return el número combinatorio
 *
 */
unsigned int NCombinatorio (unsigned int t, unsigned int k)
{
	unsigned int r = 1 , num, den = 0;   

	num = Factorial (t);
	den = Factorial (t - k) * Factorial (k);
	r = num / den;
  
  	return r;
}
