/* 
 * Ejercicio3.cpp
 * El c�digo EAN-13 (European Article Number) contiene 13 d�gitos y es el c�digo de barras m�s com�nmente utilizado.
 * Los dos primeros d�gitos identifican el pa�s de origen del producto,
 * los siguientes cinco corresponden con el fabricante,
 * los cinco siguientes con el identificador de producto
 * y el �ltimo es un d�gito de control para comprobar que el c�digo es v�lido.
 *
 * C�lculo del D�gito de Control: Se suman los d�gitos de las posiciones impares,
 * el resultado se multiplica por 3 y se le suman los d�gitos de las posiciones pares.
 * Se busca la decena inmediatamente superior y se le resta el resultado anterior.
 * El valor resultante es el d�gito de control.
 *
 * Paso 1: Suma de los d�gitos que ocupan las posiciones pares: 8 + 1 + 5 + 4 + 1 + 5 = 24
 * Paso 2: Suma de los d�gitos que ocupan las posiciones impares: 4 + 2 + 8 + 5 + 2 + 4 = 25
 * Paso 3: Multiplica por 3 la suma de los d�gitos impares: 25 * 3 = 75
 * Paso 4: Suma al valor obtenido anteriormente la suma de los n�meros pares: 24 + 75 = 99
 * Paso 5: Redondea el valor obtenido a la decena inmediatamente superior, 100
 * Paso 6: El d�gito de control es el valor obtenido de restar a la decena superior la suma total: 100 � 99 = 1
 * 
 * Escribe una funci�n esEAN que se le pase como par�metro de entrada una cadena de caracteres que representa un c�digo de barras
 * y devuelva si es o no correcto. Ayuda: el c�digo ASCII del car�cter �0� es 48.
 *
 * Implementa un programa en C++ donde se lea desde el fichero EAN13.txt cada uno de los c�digos de barras 
 * y usando la funci�n anterior se verifique si son correctos o no. Se debe crear un fichero con los c�digos v�lidos y
 * otro con los no v�lidos (Ficheros EAN13_Validos.txt y EAN13_NoValidos.txt).
 */
 
#include<iostream>
// Libreria para leer y guardar documentos.
#include<fstream>

using namespace std;

const int F = 10; // Que se puedan leer hasta 10 numeros
const int C = 13; // La longitud de codigo EAN13

typedef int Matriz[F][C]; // La matriz de datos donde se va a almacenar
// La funci�n para leer los codigos EAN13
void Leer(ifstream &, Matriz);

int main()
{
	ifstream f;
	Matriz a;
	// Implementa un programa en C++ donde se lea desde el fichero EAN13.txt cada uno de los c�digos de barras
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


