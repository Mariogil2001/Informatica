/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Almacena la información de cinco clientes de un banco. 
 * Permite calcular el sado medio y mostar clientes VIP
 *
 * @version 1.0
 * @author Mario Gil Domingo
 * @date 23-01-2022
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>

using namespace std;


/** 
 * 
 * @struct Fecha
 * Registro para guardar la información de una Fecha
 *
 * @var Fecha::dia
 * Almacena el dia
 * @var Fecha::mes
 * Almacena el mes
 * @var Fecha::anyo
 * Almacena el año
 */
struct Fecha
{
	unsigned int dia;
	unsigned int mes;
	unsigned int anyo;
};

/** 
 * 
 * @struct Cliente
 * Registro para guardar la información de un Cliente
 *
 * @var Cliente::dni
 * Almacena el dni del cliente
 * @var Cliente::saldo
 * Almacena el saldo de la cuenta
 * @var Cliente::f
 * Almacena la fecha de apertura de la cuenta
 */
struct Cliente
{
	unsigned int dni;
   	float saldo;
	Fecha f;
};

const unsigned int TAM = 5;
/**
*
* @brief Definicion de tipo de dato VectorC de tamaño 5 elementos de tipo Cliente
*
* @typedef VectorC
*/
typedef Cliente VectorC [TAM];

void LeerClientes (VectorC);
float SaldoMedio (const VectorC);
void MostrarCientesVIP (const VectorC, float);

int main()
{
	float saldo;
	VectorC v;
	LeerClientes(v);
	saldo = SaldoMedio(v);
	cout << "El saldo medio de los caballeros es " << saldo << endl;
	MostrarCientesVIP (v, 20000);
	MostrarCientesVIP (v, 50000);	
	
	return 0;
}

// Una función LeerClientes que lea la información de cinco clientes desde el teclado
// y la almacene en un vector de clientes que se le pasará como parámetro.
void LeerClientes (VectorC v)
{
	int j = 0;
	for (unsigned int i = 0; i < TAM; i++)
	{
		j = i + 1; 
		cout << "Introduzca el DNI del cliente numero " << j << endl;
		cin >> v[i].dni;
		cout << "Introduzca el saldo del cliente numero " << j << endl;
		cin >> v[i].saldo;
		cout << "Introduzca el Dia de crecacion de la cuenta para cliente numero " << j << endl;
		cin >> v[i].f.dia;
		cout << "Introduzca el mes de crecacion de la cuenta para cliente numero " << j << endl;
		cin >> v[i].f.mes;
		cout << "Introduzca el anyo de crecacion de la cuenta para cliente numero " << j << endl;
		cin >> v[i].f.anyo;		
	}
	
	return;
}

// Una función SaldoMedio que calcule el saldo medio de los clientes 
// y lo devuelva como valor de retorno. 
// Tiene como dato de entrada el vector con los clientes.
float SaldoMedio (const VectorC v)
{
	float media = 0;
	for (unsigned int i = 0; i < TAM; i++)
		media = media + v[i].saldo;
	media = media /TAM;
	return media;
}

 // Un procedimiento MostrarClientesVIP que pasándole el vector de clientes y un saldo,
 // muestre en pantalla toda la información de los clientes que superan ese saldo en su cuenta.
void MostrarCientesVIP (const VectorC v, float saldoVIP)
{
	for (unsigned int i = 0; i < TAM; i++)
	{
		if (v[i].saldo > saldoVIP)
			cout << "El caballero con DNI " << v[i].dni << " tiene un saldo superior a " << saldoVIP << endl;
	}
	
	return;
}
