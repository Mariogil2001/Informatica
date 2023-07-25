/**
 *
 * @file Ejercicio5cpp
 *
 * @brief 
 * Genera una secuencia de números
 * aleatorios en un intevalo dado.
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 09-11-2021
 *
 * @copyright Universidad de Valencia
 */
 
 #include <iostream>
 #include <cwchar>
 #include <clocale>
 #include <cstdlib>
 #include <ctime>
 
 using namespace std; 
 int valor, nums, a, b;
 
 int main ()
 {
 	cout << "Introduce la cantidad de números aleatorios que quieres obtener";
 	cin >> nums;
 	cout << "Introduce el primer valor del intervalo";
 	cin >> a;
 	cout << "Introduce el segundo valor del intervalo";
 	cin >> b;
 	return 0;
 	
 }
 
 int NumAleatorio (int nal)
{
	srand (time(NULL));
	
	for (int i = 0; i <= nums; i++)
	{
		valor = rand () % ( 100 + 1 );
		cout << valor << endl;
		return valor;
	}
	
}
 
 
