/**
 *
 * @file Sorpresa1.cpp
 *
 * @brief 
 *
 * Escribe una función que calcule y devuelva el volumen de un prisma a partir
 * de la altura, de la longitud y de la profundidad.
 * Realiza un programa en C++ que lea desde el teclado la altura, longitud y profundidad de
 * un prisma, llame a la función anterior y muestre el resultado por pantalla.
 * Datos de entrada : Altura , longitud y profundidad
 * Introducir datos
 * Aplicar fórmula para volumen
 * Devolver volumen
 * Datos de salida : Volumen de un prisma
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
 #include <iostream>
 using namespace std;
 int a , l , p , r;
 int volumen (int,int,int)
 {
 	r = a * l * p;
 	return r;
 }
 int main(){
 	do{
 		cout << "\n Introduce altura: " ;
	 	cin >> a;
	 	cout << "\n Introduce longitud: " ;
	 	cin >> l;
	 	cout << "\n Introduce profundidad: ";
	 	cin >> p;
	 	r = volumen (a, l, p);
	 	cout << "El volumen sera : " << r;
	 	r = 0;
	 } while(a>0 && l>0 && p>0);
 	
 	
 	return 0;
 }
