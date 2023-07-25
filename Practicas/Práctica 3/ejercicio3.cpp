/**
 *
 * @file ejercicio1.cpp
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
 	int a,b,x1,x2,f;
 	int z = 1;
	while (z == 1) // Ponemos esta condición para que si después de ejecutarse si pone != 1 finalize el programa
	{
		cout << "Introduce valor de a\n";
	 	cin >> a;
	 	cout << "Introduce valor de b\n";
	 	cin >> b;
		cout << "f(x) = " << a <<"*x + " << b << endl;
	 	cout << "Introduce primer termino del intervalo" << endl;
	 	cin >> x1;
	 	cout << "Introduce segundo termino del intervalo" << endl;
	 	cin >> x2;
	 	for(x1; x1<=x2; x1++){
	 		f = a*x1+b;
	 		cout << " Para x = "<< x1 << ", f(x) = " << f << endl;;
		 }
	
		 cout << "Deseas continuar? Pulsa 1 para continuar y 0 para terminar: "<< endl;
		 cin >> z;
	}
	cout << "Ha decidido terminar. Bye-Bye!" << endl;
 	return 0;
 }
 
 
 
