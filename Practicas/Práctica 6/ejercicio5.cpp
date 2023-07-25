/**
 *
 * @file ejercicio5.cpp
 *
 * @brief 
 *
 * Escribe un programa en C++ que permita manipular
 * matrices de números enteros positivos con un tamaño indicado por el usuario
 * 
 *
 * Datos de entrada :   
 *
 *		
 *		
 *			
 * Datos de salida : 
 *
 * @version 1.0
 * @author Mario Gil 
 * @date 17-01-2022
 *
 * @copyright Universidad de Valencia
 */
#include<iostream>
// Estas librerias sirven para las cosas aleatorias
#include <cstdlib>
#include <ctime>

using namespace std;

const unsigned short MAX = 64; // La capacidad máxima de la matriz, tiene que ser constante
typedef unsigned short Matriz[MAX][MAX];
// Prototipos de las funciones
void randomMatriz ( Matriz, unsigned short, unsigned short);
void umbralizarMatriz (const Matriz, Matriz, unsigned short, unsigned short, unsigned short);
void imprimirMatriz (const Matriz, unsigned short, unsigned short);
char menu ();

int main()
{
	Matriz m;
	unsigned short filas,columnas, umbral;
	char op;
	
	do
	{
		op = menu();
		switch (op)
		{
			case 'A':
				do
				{
					cout << "Introduce numero de filas:" << endl;
					cin >> filas;
					cout << "Introduce numero de columnas: " << endl;
					cin >> columnas;					
				} while (filas > MAX || columnas > MAX);
				randomMatriz (m, filas, columnas);
			break;
			case 'B':
				imprimirMatriz (m,filas, columnas);
			break;
			case 'C':
				cout << "Introduce el umbral a aplicar: " << endl;
				cin >> umbral; 
				umbralizarMatriz ( m,m,filas,columnas,umbral);
			break;
			case 'D':
					imprimirMatriz ( m,filas,columnas);
			break;
		}
	}while (op != 'E');
	return 0;
}

char menu()
{
	char op;
	do
	{
		cout << "A. Rellenar una matriz." << endl;
		cout << "B. Mostrar en pantalla la matriz original." << endl;
		cout << "C. Umbralizar una matriz." << endl;
		cout << "D. Mostrar en pantalla la matriz umbralizada." << endl;
		cout << "E. Acabar." << endl;
		cin >> op;
	}while (op < 'A' || op > 'E' );
	return op;
}

void randomMatriz ( Matriz a, unsigned short filas, unsigned short columnas)
{
	//Declaracion de variables para el bucle y numero aleatorio
	unsigned short i,j;
	// Primero creamos la matriz random, rellenandola con numeros aleatorios
	srand (time (NULL)); // Crea un numero aleatorio
	for(i = 0; i < filas; i++ )
	{
		for(j = 0; j < columnas; j++)
		{
			a[i][j] = 0 + rand()%(256);	// variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
			 // El numero tienen que estar entre 0 y 255			
		}
	}
}

void imprimirMatriz (const Matriz m, unsigned short filas, unsigned short columnas)
{
	unsigned short i, j; // Declaración de variables (filas y columnas) para mostrar la matriz
	for (i = 0; i < filas; i++)
	{
		cout << "| "; // La parte de la izquieda de la matriz
		for (j = 0; j < columnas; j++)
		{
			cout << m[i][j]<< " "; // Un poco de separacion para cada numero
		}
		cout << " |" << endl; // La parte derecha de la matriz con un c out
	}
	return;
}

void umbralizarMatriz (const Matriz , Matriz m, unsigned short filas, unsigned short columnas, unsigned short umbral)
{
	unsigned short i, j; // Declaración de variables (filas y columnas)
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < columnas; j++)
		{
			if(m[i][j]<= umbral)
				m[i][j] = 0; // Si está por debajo del umbral, el resultado es 0
			else
				m[i][j] = 1; // Si está por encima del umbral, el resutado es 1	
		}
	}
	return;
}


