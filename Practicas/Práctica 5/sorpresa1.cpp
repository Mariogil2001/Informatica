/**
 *
 * @file sopresa1.cpp
 *
 * @brief 
 *
 * Escribe una función, ConvertirM, para realizar la conversión de masa en libras y onzas a
 * kilogramos y gramos. Los datos de entrada y de salida son enteros positivos.
 * Escribe un programa en C++ que lea una masa en libras y onzas desde teclado y muestre el
 * equivalente en kilogramos y gramos por pantalla
 * Datos de entrada : Libras y Onzas (real)
 * aplicar subprograma 'ConvertirM'
 * gramos = (16*libras+onzas)*28.34
 * kg = g / 1000
 * 		
 * Datos de salida : El número en kilogramos y gramos
 *
 * @version 1.0
 * @author Mario Gil y Luis Petrisor
 * @date 10-11-2021
 *
 * @copyright Universidad de Valencia
 */
 
 #include<iostream>
 using namespace std;
 void ConvertirM (int, int, int &, float &);
 int main()
 {
 	int libras, onzas, kilogramos;
 	float gramos;
 	cout << "Introduce cantidad en libras: ";
 	cin >> libras;
 	cout << "\nIntroduce cantidad en onzas: ";
 	cin >> onzas;
 	ConvertirM (libras, onzas, kilogramos, gramos);
 	cout << kilogramos <<"kg " << gramos <<"g ";
 	return 0;
 	
 }
 void ConvertirM ( int libras, int onzas, int & kg, float & g)
{

	int i = 0;
	g = (libras * 16 + onzas)*28.3495231;
	kg = g; 
	do{
		kg--;
		i++;
	}while (kg % 1000 != 0);
	kg = kg / 1000;
	g = i;
	return;
} 
