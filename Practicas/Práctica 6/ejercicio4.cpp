/**
 *
 * @file ejercicio4practica6.cpp
 *
 * @brief 
 *
 * Esto es un juego basatante primitivo en el que se ha de alcanzar la oscuridad
 *
 * @version 1.0
 * @author Derek Macias, Diego Gomez
 * @date 28-11-2021
 *
 */

#include <iostream>

/*
 * estas librerias sirven para las cosas aleatorias
 */
#include <cstdlib>
#include <ctime>

using namespace std;
/*
 * declaración de constantes para el tamaño de la matriz tablero
 */
const unsigned int TAM = 5;
typedef char Matriz[TAM][TAM];
/*
 * prototipos de funciones auxiliares
 */
void inicializar (Matriz);
void mostrar (const Matriz);
void pedir ( int &, int&);
void actualizar (Matriz, int, int);
unsigned int comprobar (const Matriz);

//funcion principal
int main()
{
	//decl de variables
	Matriz t; //tablero
 	int fil, col;	//coordenadas
	unsigned int luces, njugadas = 0;	//contadores guays
	
	//introduccion al usuario de lo que pasa
	cout << "Alguien (el ordenador este) ha dejado las luces encendidas (las oes en la matriz). Apagalas, plis." << endl;
	cout << "Cuidadin! Al pulsar cualquier interruptor cambias el estado de esta y de las bombillas adyacentes " << endl;
	cout << "(horizontal y verticalmente)" << endl;
	cout << "Suerte, soldado!" << endl;
	
	//llamada a funciones auxiliares para la generación del tablero
	inicializar (t);
	mostrar (t);

	do	//esto se repite hasta que ganes
	{
		//aqui hay mas funciones para hacer cosas
		pedir (fil, col);
		actualizar (t, col - 1, fil - 1);
		mostrar (t);
		luces = comprobar (t);
		 cout << "Cantidad de luces encendidas: " << luces << endl;
		njugadas++;
		cout << "has pulsado algun interruptor " << njugadas << " veces" << endl;
	}
	while (luces > 0);
	
	//a ver si alguien llega a estas lineas de codigo en la ejecucion
	cout << "Has ganado en"  << njugadas << " pulsaciones! " << endl;
	cout << "Enhorabuena!" << endl;
	
	return 0;
}
/**
 *
 * Crea un tablero de "lights out" aleatorio 
 *
 * @param [out] a la matriz rellenada de oes y equises
 *
 *
 */
void inicializar (Matriz g)
{
	srand (time (NULL));	//esto inicializa el rng
	for (unsigned int i = 0; i < TAM; i++)
	{	
		for (unsigned int j = 0; j < TAM; j++)
		{
		    unsigned int val = rand () % 2;
			if (val < 1)
			 	g [i][j] = 'x';
			else
				g [i][j] = 'o';
		}
	}
	return;
}

/**
 *
 * Muestra una matriz sin cuadricula porque paso de plantearme como ajustar elementos de mas de una cifra
 *
 * @param [out] a la matriz rellenada
 *
 *
 */
void mostrar (const Matriz a)
{
	cout << endl; 	//algo de separacion con lo demas
	cout << "  1 2 3 4 5"<< endl;
	
	//sabemos como va esto de los for y las matrices. amigos inseparables si quieres meter o sacar datos en o de ellas
	for (unsigned int i = 0; i < TAM; i++) 
	{
		cout << i + 1 << " ";
        for (unsigned int j = 0; j < TAM; j++) 
        {
		    cout << a[i][j] << " "; //al menos algo de separacion para no matar ojos
    		
		}
		cout << endl;   
    }
    cout << endl; 	//mas separacion
    return;
}

/**
 *
 * Pide un par de numeros que sirven de coordenadas, pero aplicado a un juego de luces
 *
 * @param [in & out] x, y coordenadas que servirán para hacer otra cosa
 *
 */
void pedir (int & x, int & y)
{

	//luces
	cout << "Que luz quieres encender? (1 a 5)" << endl;
	
	do		//lo típico en selectores de valores limitados para usuarios
	{
		cout << "columna: ";
		cin >> x;
	}
	while (x < 1 || x > TAM);
	
	do
	{
		cout << "fila: ";
		cin >> y; 
	}
	while (y < 1 || y > TAM);
	return;
}

/**
 *
 * Esto es superraro a la vista, pero basicamente cambia los estados de las bombillas en un
 * tablero de "lights out" de la forma que debería ser
 *
 * @param [in & out] a la matriz tablero donde ocurre el juego y los cambios
 * @param [in] b, c coordenadas (x e y respectivamente)
 *
 *
 */
 
void actualizar (Matriz a, int b, int c)
{
	
	if (a [b][c] == 'x')	//centro
		a [b][c] = 'o';
	else  
	 	a [b][c] = 'x';
	
	if (b - 1 >= 0)			//izqu. si hay
	{
		if (a [b - 1][c] == 'x')
			a[b - 1][c] = 'o';
		else 
			a[b - 1][c] = 'x';
	}
	
	if (b + 1 <= TAM - 1)		//der. si hay
	{
		if (a [b + 1][c] == 'x')
			a[b + 1][c] = 'o';
		else 
			a[b + 1][c] = 'x';
	}
	
	if (c - 1 >= 0)			//arriba si hay
	{
		if (a [b][c - 1] == 'x')
			a[b][c - 1] = 'o';
		else 
			a[b][c - 1] = 'x';
	}
	
	if (c + 1 <= TAM - 1)		//abajo si hay
	{
		if (a [b][c + 1] == 'x')
			a[b][c + 1] = 'o';
		else 
			a[b][c + 1] = 'x';
	}
	return;
}

/**
 *
 * Esto cuenta cuantas luces hay encendidas en un tablero de 
 * "lights out", poco mas
 *
 * @param [in] jota la matriz tablero
 * valor de retorno conto el recuento de luces
 *
 */

unsigned int comprobar (const Matriz jota)
{
	unsigned int conto = 0;
	
	for (unsigned int i = 0; i < TAM; i++) 
	{
        for (unsigned int j = 0; j < TAM; j++) 
            if (jota [i][j] == 'o')
            	conto++;   
    }
    return conto;
}
