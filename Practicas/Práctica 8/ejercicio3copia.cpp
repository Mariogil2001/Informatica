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
		// Paso 1: Suma de los dígitos que ocupan las posiciones pares			
			npar = stoi(num);
			cpar = cpar + npar;
		}
		else
		{
			// Paso 2: Suma de los dígitos que ocupan las posiciones impares			
			nimpar = stoi(num);
			cimpar = cimpar + nimpar;
		}		
	}
	// Paso 3: Multiplica por 3 la suma de los dígitos impares
	cimpar = cimpar * 3;
	// Paso 4: Suma al valor obtenido anteriormente la suma de los números pares
	suma = cpar + cimpar;
	// Paso 5: Redondea el valor obtenido a la decena inmediatamente superior
	redondeo = suma;
	while (redondeo % 10 != 0)
	{
		redondeo++;
	}
	// Paso 6: El dígito de control es el valor obtenido de restar a la decena superior la suma total
	resultado = redondeo - suma;
	DigitoControl = EAN[12];
	dc = stoi(DigitoControl);
	if (resultado == dc)
	{
		cout << "El Codigo EAN13 es correcto" << endl;
		// Se debe crear un fichero con los códigos válidos (EAN13_Validos.txt)
		guardar.open("EAN13_Validos.txt");
		guardar << EAN;
		guardar << endl;
		guardar.close();
	}
	else
	{
		cout << " El Codigo EAN13 NO es correcto y eres puto" << endl;
		// Se debe crear un fichero con los códigos NO válidos (EAN13_NoValidos.txt)
		guardar.open("EAN13_NoValidos.txt");
		guardar << EAN;
		guardar << endl;
		guardar.close();
		
	}
	
	return; 
}




