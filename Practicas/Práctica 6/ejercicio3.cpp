/**
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 * Implementa un programa en C++ que lea los elementos de una matriz 4x3
 * y genere un vector de tamaño 4 en el que cada elemento almacene el valor
 * de la suma de los elementos de una fila de la matriz. 
 *
 * Datos de entrada: Una matriz de tamaño 4x3
 *	Leemos la matriz
 *	Luego mostramos la matriz
 * 	Sumamos la fila con un resultado que es igual al resultado mas el elemento
 *	Mostramos el resultado de la suma
 * 		Mostramos el resultado de cada fila
 * Datos de salida : Un vector de tamaño 4 con cada elemento de las sumas de las filas de la matriz
 *
 * @version 1.0
 * @author Mario Gil
 * @author Luis Petrisor
 * @date 1-12-2021
 *
 * @copyright Universidad de Valencia
 */
 #include<iostream>
 
 using namespace std;
 const int fila = 4;
 const int columna = 3;
 typedef int Matriz[fila][columna];
 typedef int Vector[fila];
 
 void leerMatriz (Matriz&);
 int sumafilas (const Matriz, int);
 void rellenarVector (const Matriz, Vector&);
 void mostrar (const Matriz, const Vector);

 
  int main()
 {
 	Matriz m;
 	Vector v;
 	for(int i = 0; i < fila; i++)
	 {
	 	for (int j = 0; j < columna; j++)
	 		m[i][j] = 0;
	 	v[i]= 0;	
	 }

 	leerMatriz (m);
 	rellenarVector (m,v);
 	system("cls");
  	mostrar(m,v);		

 	return 0;
 	
 }

 void leerMatriz (Matriz & a)
 {
  	
  	for (int i = 0; i < fila; i++)
  		for (int j = 0; j < columna; j++)
		{
			cout << "Introduce el elemento (" << i << " ," << j << "):" << endl;
  			cin >> a[i][j];
  		}
  			
  	return;		
 }
 
 void rellenarVector (const Matriz a, Vector & v)
 {
 	for (int i = 0;i < fila; i++)
 		for (int j = 0; j < columna; j++)
 			v[i] = sumafilas(a,i);
  	return;	
  	
 }
 
 int sumafilas (const Matriz a, int n)
 {
 	int res = 0;
 	for (int j = 0; j < columna; j++)
 		res += a[n][j];
	
 	return res;
 }
 
 void mostrar (const Matriz a, const Vector v)
 {
 	for (int i = 0; i < fila; i++)
	 {
	 	cout << i << " [";
	 	for (int j = 0; j < columna; j++)
	 		cout << " " << a[i][j];
	 	cout << " ] -> " << v[i] << endl;	
	 }
	 return;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
