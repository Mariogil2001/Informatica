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
 	int numero;
 	int n,i, contador;
 	
 	contador = 0;
 	i = 0;
 	n = 10000;
 	
 	cout << "Introduce un valor: " << endl;
 	cin >> numero;
 	
 	numero  = numero/10 - numero%10;
 	if(numero<0)
	 {
 		cout << "creciente" ;
	 }
 	while ( numero >= 0 ){
 		
 		numero = numero/10 - numero%10;
 	 	if (numero<=0)
	  	{
 	 		cout << "Creciente" ;
 	 		break;
	 	}
	 	if (9>numero>0)
	  	{
 	 		cout << "Decreciente" ;
 	 		break;
	  	}
	}
 	do{
 		i = n/10 - n%10;
 		while(i>0){
 			n = n/10 - n%10;
 			if (n<=0)
	  		{
 	 			contador++;
 	 			n--;
	 		}
	 		if (9>n>0)
	  		{
 	 			n--;
	 		}
			
		}
 	 	n--;
	 }while (n>0);
 
 	cout << "\n\nHay un total de " << contador << " crecientes en el intervalo [1,10000]." << endl;
 	return 0;
 }
