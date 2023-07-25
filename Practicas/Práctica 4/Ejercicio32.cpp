/**
 *
 * @file Ejercicio3.cpp
 *
 * @brief 
 *
 * Determinar cual numero es mayor
 * Datos de entrada : 4 numeros reales
 * Introduce los 4 datos
 * llama al subprograma comparar
 * decir cual es el mayor ejecutandolo 3 veces
 * 
 *
 * Datos de salida : El numero mayor
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
 #include <iostream> 
 using namespace std;

 float comparar (float , float );

 int main()
 {
 	float a, b, c, d, aux1, aux2, r;
 	
 	cout << "\n Introduce numero a comparar: ";
	cin >> a;
	cout << "\n Introduce numero a comparar: ";
	cin >> b;
	cout << "\n Introduce numero a comparar: ";
	cin >> c;
	cout << "\n Introduce numero a comparar: ";
	cin >> d;
	
	aux1 = comparar (a,b);
	aux2 = comparar (c,d);
	r = comparar (aux1, aux2); 
	cout << "El numero mayor es " << r << endl;
 	
 	return 0;
 }
 
  float comparar (float a, float b)
  {
 	float r;
 	if (a>b)
	 {
 		r = a;
	 }
	 if (b>a)
	 {
	 	r = b;
	 }
	 return r;
 }
