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

void Operaciones (string);

int main()
{
	ifstream f;
	string codigo;
	// Abrimos el archivo con codigos EAN13
	f.open("EAN13.txt");
	// Si hay algun error mostramos un mensaje de error
	if (f.fail())
		cout << "Error al abrir el archivo." << endl;
	//Sino obtenemos las lineas de codigo y ejecutamos el programa hasta que no hayan lineas	
	else 
		 while (!f.eof())
		{
			getline (f,codigo);	
			Operaciones (codigo);
			cout << codigo << endl;
		} 
	
	
	return 0;
}

// num = stoi(string);
void Operaciones (string EAN)
{
	ofstream guardar;
	// Aislar el numero de la cadena y el digito control
	string DigitoControl, num = "";
	// Numero
	int npar = 0, nimpar = 0;
	// Contador
	int cpar = 0, cimpar = 0;
	// Resto de operaciones
	int suma = 0, redondeo = 0, resultado = 0, dc = 0;
	for (unsigned int i = 0; i< EAN.length()-1; i++)
	{
		num = EAN[i];
		if (i % 2 == 0)
		{
		// Paso 1: Suma de los d�gitos que ocupan las posiciones pares			
			npar = stoi(num);
			cpar = cpar + npar;
		}
		else
		{
			// Paso 2: Suma de los d�gitos que ocupan las posiciones impares			
			nimpar = stoi(num);
			cimpar = cimpar + nimpar;
		}		
	}
	// Paso 3: Multiplica por 3 la suma de los d�gitos impares
	cimpar = cimpar * 3;
	// Paso 4: Suma al valor obtenido anteriormente la suma de los n�meros pares
	suma = cpar + cimpar;
	// Paso 5: Redondea el valor obtenido a la decena inmediatamente superior
	redondeo = suma;
	while (redondeo % 10 != 0)
	{
		redondeo++;
	}
	// Paso 6: El d�gito de control es el valor obtenido de restar a la decena superior la suma total
	resultado = redondeo - suma;
	DigitoControl = EAN[12];
	dc = stoi(DigitoControl);
	if (resultado == dc)
	{
		cout << "El Codigo EAN13 es correcto" << endl;
		// Se debe crear un fichero con los c�digos v�lidos (EAN13_Validos.txt)
		guardar.open("EAN13_Validos.txt");
		guardar << EAN;
		guardar << endl;
		guardar.close();
	}
	else
	{
		cout << " El Codigo EAN13 NO es correcto y eres puto" << endl;
		// Se debe crear un fichero con los c�digos NO v�lidos (EAN13_NoValidos.txt)
		guardar.open("EAN13_NoValidos.txt");
		guardar << EAN;
		guardar << endl;
		guardar.close();
		
	}
	
	return; 
}




