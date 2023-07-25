/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * El programa trata mediante el resto del Dni
 * obtener la letra de este.
 *
 * Datos de Entrada:  numeros del DNI.
 * 
 * Datos de Salida: la letra del DNI.
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 20-10-2021
 *
 * @copyright Universidad de Valencia
 */
 
#include <cmath>
#include <iostream>

using namespace std ;

int main() {
	int n ;
	cout << " Introduzca su numero de dni sin letra " << endl ;
	cin >> n ;
	
switch( n % 23 )
{
	case 0: 
		cout << " Su letra es la T " << endl ;
    break;
    case 1:
		cout << " Su letra es la R " << endl ;
    break;
    case 2:
		cout << " Su letra es la W " << endl ;
    break;
    case 3: 
		cout << " Su letra es la A " << endl ;
    break;
    case 4: 
		cout << " Su letra es la G " << endl ;
    break;
    case 5: 
		cout << " Su letra es la M " << endl ;
    break;
    case 6: 
		cout << " Su letra es la Y " << endl ;
    break;
    case 7: 
		cout << " Su letra es la F " << endl ;
    break;
    case 8: 
		cout << " Su letra es la P " << endl ;
    break;
    case 9: 
		cout << " Su letra es la D " << endl ;
    break;
    case 10: 
		cout << " Su letra es la X " << endl ;
    break;
    case 11: 
		cout << " Su letra es la B " << endl ;
    break;
    case 12: 
		cout << " Su letra es la N " << endl ;
    break;
    case 13: 
		cout << " Su letra es la J " << endl ;
    break;
    case 14: 
		cout << " Su letra es la Z " << endl ;
    break;
    case 15: 
		cout << " Su letra es la S " << endl ;
    break;
    case 16: 
		cout << " Su letra es la Q " << endl ;
    break;
    case 17: 
		cout << " Su letra es la V " << endl ;
    break;
    case 18: 
		cout << " Su letra es la H " << endl ;
    break;
    case 19: 
		cout << " Su letra es la L " << endl ;
    break;
    case 20: 
		cout << " Su letra es la C " << endl ;
    break;
    case 21: 
		cout << " Su letra es la K " << endl ;
    break;
    case 22: 
		cout << " Su letra es la E " << endl ;
    break;
    
    default: cout << " Usted ha ingresado una opción incorrecta " << endl ;
}
	
	return 0;
}

