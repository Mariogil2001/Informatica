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
 	int n,i, c;
 	
 	c = 0;
 	n = 0;
 	
 	for(int n=1; n<=10000;n++){
 		
 		if(0<n<100){
		 i = n/10 + n%10;
		 if (i<=0)
	  		{
 	 			c++;
	 		}
		}
 		if(100<n<1000){
 			i = n/100 + n%100;
 			 if (i<=0)
	  		{
 	 			c++;
	 		}
		}
 		if(1000<n<10000){
 			i = n/1000 + n%1000;
 			 if (i<=0)
	  		{
 	 			c++;
	 		}
		}
		
	 }
 

 	
 	cout << "Hay un total de " << c << " crecientes" << endl;
 	
 
 	return 0;
 }
