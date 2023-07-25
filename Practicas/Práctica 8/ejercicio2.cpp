/* Programa que muestre por pantalla una tabla con 
* los valores de la funcion x^2 y sqrt(x) en el intervalo [1,100]
* en incremento de 10 en 10.
*/

#include <iostream>
//Libreria para el manejo de ficheros 
#include <fstream> // La traducion literal es flujo de archivo
// Libreria para poder usar las raices cuadradas
#include <math.h>

using namespace std;
//Creamos el vector para almacenar todos los datos
const unsigned int F = 10;
typedef float Vector[F];
Vector v;
// Creamos el prototipo de la funcion donde estaran todas las movidas
void formulas (float);

int main()
{
	// ifstream significa salida de datos del documento hasta el programa (leer documento)
	// ofstream sirve como salida de datos a un documento (enviar datos)
	float x = 0;
	formulas(x);
	
	return 0;
}

void formulas (float x)
{
	// Guardamos los datos con la funcion ofstream en el fichero
	ofstream f("datos.txt");
	// Creamos una cabecera monina para el documento
	f << "-----------------------------" << endl ;
	f << "   x      x^2      raiz(x)   " << endl;
	f << "-----------------------------" << endl ;
	for(int i = 0; i < F; i = i++)
	{	
		f << "   " << x << "       ";
		f << x*x << "     ";
		f << sqrt(x) << "      ";
		f << endl;
		if(x < 100)
			x = x + 10;
		else
			return;
	}	
}
