/**
 *
 * @file calculadora.cpp
 *
 * @brief 
 *
 * Implementa una sencilla calculadora de bolsillo.
 * La calculadora permite realizar sumas, restas, multiplicaciones 
 * y divisiones.
 * 
 * Datos de Entrada: los operandos y tipo de operación.
 *
 * Datos de Salida: el resultado de la operación.
 *
 * @version 1.0
 * @author Mario Gil i Luis Petrisor
 * @date 20-10-2021
 *
 * @copyright Universidad de Valencia
 */
#include <iostream>
using namespace std;

int main ()
{
   float x, res;
   int op;

   cout << "Digame la cantidad de litros a depositar: " << endl;
   cin >> x;
   cout << "Seleccione operacion: " << endl;
   cout << "1. Gasolina 95 a 1.48 €/L " << endl;
   cout << "2. Gasolina 98 a 1.64 €/L " << endl;
   cout << "3. Gasoleo A a 1.35 €/L " << endl;
   cin >> op;

   switch (op)
   {
		case 1:
        	res = x * 1.48;
        	break;
      	case 2:
        	res = x * 1.64;
        	break;
      	case 3:
        	res = x * 1.35;
        	break;
      	default:
        	cout << "Operación incorrecta.";
   }
  	if(res>0)
	  {
   	  cout << "Ha puesto " << x << " litros. Pase por caja y pague " << res << " € , por favor. " <<endl;
   	  }
   	  else
		 {
   	  	  cout << " No hay gasolina, no hay pago " << endl;
		 }

   return 0;
}
