/**
 *
 * @file ejerciciosorpresa.cpp
 *
 * @brief 
 *
 * Programa para realizar ciertas operaciones con un intervalo introducido.
 * 
 * Datos de Entrada: 2 numeros enteros.
 *
 * Datos de Salida: resultado deseado.
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 20-10-2021
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int a, b, res, pares;
   short opcion;   
   
   cout << "Introduce el valor de a: " << endl;
   cin >> a;
   if (a<0)
   {
   	cout << "Error" << endl;
   	return 0;
   }
   cout << "Introduce el valor de b: " << endl;
   cin >> b;
   if (b<0)
   {
   	cout << "Error" << endl;
   	return 0;
   }
   
	cout << "Seleccione una operacion " << endl;
   cout << "1. Imprimir el intervalo " << endl;
   cout << "2. Imprimir la longitud del intervalo " << endl;
   cout << "3. Imprimir la cantidad de números pares incluida dentro del intervalo " << endl;
	
	cin >> opcion ;

   		switch (opcion) 
   		{
   			case 1:
     		 if (a > b){
			  
        	 	cout << "[" << b << ","<< a << "]" << endl;
        		 
     		 }
			  else 
			  	if (b > a){
				
        	 		cout << "[" << a << ","<< b << "]" << endl;
        	 	}
        		else {
			
        			cout << "[" << a << ","<< b << "]" << endl;
        		}
        		
        	
        	break;
        	
			case 2:
				if (a < b){
		
				res = b-a+1;
        	 	cout <<"El resultado es " << res << endl;
        	 }
        		 
     		 	else
			  
			  		if (b < a)
					{
				  
        	 		res = a-b+1;
        	 	cout << res << endl;
        		 	}
        	 	
        			else {
        			cout << "1" << endl;
        			}
        		
					
    		break;
    		
    		case 3:
    			if (a < b)
				{
		
				res = b-a+1;
				
    		
					if	(a%2!=0 || b%2!=0)
					{
						pares = res/2-1;	
					}
					else
					{
						pares = res/2 + 1;
					}
					cout << "El resultado es "<< pares << endl;
				}
   				else if (a > b)
				{
		
			res = b-a+1;
					
			if	(a%2!=0 || b%2!=0)
			{
				pares = res/2-1;
				
			}
				
			else
			{
				pares = res/2-1;	
					
			}
			cout << "El resultado es "<< pares << endl;
   				}
			break;
			default:
				cout << "La opcion seleccionada no es la correcta" << endl;
return 0;
		}
}
