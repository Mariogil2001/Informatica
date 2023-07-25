/* 
 * Ejercicio3.cpp
 * El código EAN-13 (European Article Number) contiene 13 dígitos y es el código de barras más comúnmente utilizado.
 * Los dos primeros dígitos identifican el país de origen del producto,
 * los siguientes cinco corresponden con el fabricante,
 * los cinco siguientes con el identificador de producto
 * y el último es un dígito de control para comprobar que el código es válido.
 *
 * Cálculo del Dígito de Control: Se suman los dígitos de las posiciones impares,
 * el resultado se multiplica por 3 y se le suman los dígitos de las posiciones pares.
 * Se busca la decena inmediatamente superior y se le resta el resultado anterior.
 * El valor resultante es el dígito de control.
 *
 * Paso 1: Suma de los dígitos que ocupan las posiciones pares: 8 + 1 + 5 + 4 + 1 + 5 = 24
 * Paso 2: Suma de los dígitos que ocupan las posiciones impares: 4 + 2 + 8 + 5 + 2 + 4 = 25
 * Paso 3: Multiplica por 3 la suma de los dígitos impares: 25 * 3 = 75
 * Paso 4: Suma al valor obtenido anteriormente la suma de los números pares: 24 + 75 = 99
 * Paso 5: Redondea el valor obtenido a la decena inmediatamente superior, 100
 * Paso 6: El dígito de control es el valor obtenido de restar a la decena superior la suma total: 100 – 99 = 1
 * 
 * Escribe una función esEAN que se le pase como parámetro de entrada una cadena de caracteres que representa un código de barras
 * y devuelva si es o no correcto. Ayuda: el código ASCII del carácter ‘0’ es 48.
 *
 * Implementa un programa en C++ donde se lea desde el fichero EAN13.txt cada uno de los códigos de barras 
 * y usando la función anterior se verifique si son correctos o no. Se debe crear un fichero con los códigos válidos y
 * otro con los no válidos (Ficheros EAN13_Validos.txt y EAN13_NoValidos.txt).
 */
 
#include<iostream>
// Libreria para leer y guardar documentos.
#include<fstream>

using namespace std;

const int F = 10; // Que se puedan leer hasta 10 numeros
const int C = 13; // La longitud de codigo EAN13

typedef int Matriz[F][C]; // La matriz de datos donde se va a almacenar
// La función para leer los codigos EAN13
void Leer(ifstream &, Matriz);

int main()
{
	ifstream f;
	Matriz a;
	// Implementa un programa en C++ donde se lea desde el fichero EAN13.txt cada uno de los códigos de barras
	Leer(f, a);
	f.close();
	return 0;
}


void Leer(ifstream &archivo, Matriz a)
{
	
	archivo.open("EAN13.txt");
	if (archivo.fail())
		cout << "Error al abrir el archivo";
	else
	{
		for (unsigned int i = 0; i < F; i++)
		{
			for (unsigned int j = 0; j < C; j++)
			{
				archivo >> a[i][j];
			}
		}
	}	
		for (unsigned int i = 0; i < F; i++)
	{
		for (unsigned int j = 0; j < C; j++)
		{
			cout << a[F][C] <<" ";
		}
		cout << endl;
	}
	return;
}


