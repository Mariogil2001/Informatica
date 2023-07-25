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
 	int n,i, contador;
 	
 	contador = 0;
 	i = 0;
 	n = 10000;
 	
 	do{
 		i = n/10 - n%10;
 	 	if (i<=0)
	  	{
 	 		contador++;
	 	}
	 	
	  	n--;
	 }while (n>0);
 

 	
 	cout << "Hay un total de " << contador << " crecientes" << endl;
 	
 
 	return 0;
 }
