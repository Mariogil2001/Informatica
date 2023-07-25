/**
 *
 * @file ejercicio4.cpp
 *
 * @brief 
 *
 * Introduciendo dos numeros enteros y un intervalo, calcular f(x) = a*x + b  
 * para cada caso del intervalo
 * 
 * Datos de Entrada: Dos numeros enteros y un intervalo
 *
 * Datos de Salida: resultado en el intervalo
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 27-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
 #include <iostream>
 using namespace std;
 int main(){
 	int n,i;
 	
 	cout << "Introduce un valor: " << endl;
 	cin >> n;
 	
 	n  = n/10 - n%10;
 	if(n < 0 )
	{
 		cout << "creciente" << endl;
 		
 	}
 	if(9 < n < 0 )
	{
 		cout << "decreciente" << endl;
 		
	}
	do{
		i = n/10 - n%10;
 		
 	 	if (i < 0 )
	  	{
 	 		cout << "Creciente" << endl;
 	 	
	 	}
	 	if (9 < i < 0)
	  	{
 	 		cout << "Decreciente" << endl;
 	 	
	  	}	
	}	while ( 9 <= i );
	
 
 	return 0;
 }
