/**
 *
 * @file ejercicio5.cpp
 *
 * @brief 
 *
 * Obtener la secuencia de un numero, dividido en pares e impares
 * Datos de entrada : Un número real (n)
 * aplicar subprograma 'MostrarSec'
 * 		si el numero es impar, restas 1 y vas mostrando restas de dos en dos
 * 		sino mostras restas de dos en dos
 * 	 	sumar 2 a una variable inciada en 1	hasta llegar al numero real + 1
 * Datos de salida : Secuencia del número
 *
 * @version 1.0
 * @author Mario Gil 
 * @author Luis Petrisor
 * @date 17-11-2021
 *
 * @copyright Universidad de Valencia
 */
 #include<iostream>
 using namespace std;
 void MostrarSec (int);
 int main ()
 {
 	int n;
 	cout << "Introduce un numero a secuenciar: ";
 	cin >> n;
 	cout << "\n";
 	MostrarSec (n);
 	return 0;
 }
 
 void MostrarSec (int a)
 {
 	if (a>0)
	 {
 		if(a % 2 == 0)
			cout << a << " ";
		MostrarSec(a - 1);
		if (a % 2 != 0)
			cout << a << " ";
	}

 	return;
 }
