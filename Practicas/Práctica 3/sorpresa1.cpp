/**
 *
 * @file sorpresa1.cpp
 *
 * @brief 
 *
 * Calcula la media de sus pares, el primer termino impar de la secuencia o la suma de los terminos. 
 * 
 * 
 * Datos de Entrada: cantidad de numeros a introducir.
 *
 * Datos de Salida: segun la opcion deseada, la media de sus pares, el primer termino impar de la secuencia o la suma de los terminos.
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 27-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
 #include<iostream>
 using namespace std;
 int main(){
 	int n, c, z, suma, pares, media, contador, nimpar;
 	pares = 0;
 	media = 0;
 	bool impar;
 	do{
	 		cout << "Introduce numero que va a introducir: " << endl;
	 		cin >> n; // Por ejemplo 3 numeros diferentes
	 		
	 	for(int i = 1;i<=n;i++) // Se aplica 3 veces, hasta llegar a 3<=3
		{
	 		
	 		cout << "Introduce los terminos: " << endl;
	 		cin >> c;
	 	
	 		if(c%2 == 0)
			{
	 			pares = c + pares;	
	 			contador++;
			}
	 		if(c%2 != 0 && impar == false) 
			{
	 			nimpar = c;
				
	 			impar = true;
			}
			suma = suma + c;
		}
		cout << "1. Mostrar el valor medio de los numeros pares de la secuencia." << endl;
		cout << "2. Mostrar el primer numero impar de la secuencia." << endl;
		cout << "3. Mostrar la suma de todos los valores de la secuencia." << endl;
		cout << "0. Salir." << endl;
		cin >> z;
		if (z == 1)
		{
			media = pares / contador;
			cout << "El valor medio de los numeros: " << media << endl;
		}
		if (z == 2)
		{
			cout << "El primer numero impar es:" << nimpar << endl;
		}
		if (z == 3)
		{
			cout <<"La suma de los terminos es : " << suma << endl;
		}
	 }while(z > 1);
 
 	return 0;
 }
