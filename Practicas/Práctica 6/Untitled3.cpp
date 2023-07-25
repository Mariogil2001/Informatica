/**
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 * 
 *
 * Datos de entrada : Una matriz 4x3
 *
 *
 * Dada una matriz 4x3 haz la suma de sus filas
 *
		
 * Datos de salida : La suma de cada fila
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 1-12-2021
 *
 * @copyright Universidad de Valencia
 */
 #include<iostream>
 
 using namespace std;
 const int fila = 4;
 const int columna = 3;
 typedef int Matriz[fila][columna];
 
 
 void leer (Matriz);
 void mostrar ( const Matriz );
 int sumafilas ( const Matriz );
 
 
  int main()
 {
 	Matriz m;
 	
 	leer (m);
 	mostrar (m);
	sumafilas (m);

 	
 	return 0;
 	
 }

 void leer (Matriz a)
 {
  	unsigned int i, j;
  	
  	for (i = 0; i < fila; i++)
  		for (j = 0; j < columna; j++)
		{
			cout << "Introduce el elemento (" << i << " ," << j << "):" << endl;
  			cin >> a[i][j];
  		}
  			
  	return;		
 }
 
 void mostrar (const Matriz a)
 {
  	  	unsigned int i, j;
  	
  	for (i = 0; i < fila; i++)
  	{
  		
	
  		for (j = 0; j < columna; j++)
  			cout << a[i][j] << " ";
  		cout <<" -> " << sumafilas (a);
		cout << endl;
  	}
  			
  	return;	
  	
 }
 
 int sumafilas (const Matriz a)
 {

 	int res = 0;
 	for(int i = 0; i < fila; i++)
	 {
	 	for (int j = 0; j < columna; j++)
		{
 		res = res + a[i][j];
		}
		return res;
	

	 }
	
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
