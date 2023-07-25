/**
 *
 * @file sorpresa2.cpp
 *
 * @brief 
 *
 * Calcula la cantidad de cifras de un numero entero. 
 * Contiene Errores.
 * 
 * Datos de Entrada: el numero.
 *
 * Datos de Salida: la cantidad de cifras.
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
 	int a;
 	do{
	cout << "Introducir altura de la T: " << endl;
	cin >> a;
	} while(a%2 != 0 && a<3 && a>25);
 	
 	for (int i = 1 ; i<=a ; i++){
 		
 		cout << "*" ;
	 }
 	
 	
	return 0;
 }
