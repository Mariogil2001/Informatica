/**
 *
 * @file ejercicio5practica8alt.cpp
 *
 * @brief 
 *
 * Esto manipula datos procedentes de un fichero llamado empledo.txt en el cual hay muchos acentos,
 * en este caso un fichero con empleados. Desde ahí da los datos del empleado mas antiguo, sube los sueldos un 3%
 * y lo reimprime tooodo en un fichero de texto y un .html. muy bonito.
 *
 * @version 1.0
 * @author Derek Macias, Diego Gomez
 * @date 16-12-2021
 *
 */
#include <iostream>
#include <fstream>	//para manipular ficheros
#include <string>	// ''  ''  strings

using namespace std;

//decl. de constantes
const int LIM = 1000;	//cantidad limite de empleados
const unsigned short MES = 12;	//los meses del año

typedef float Vctrn [MES]; //para las nominas anuales (acabo de terminar el troubleshooting, estoy temblando de emocion)
typedef string Vctrm [MES];	//para los meses del año

//struct principal: el empleado
struct Empleado
{
	string nombre;
	string pos;
	string fec;
	string fij;
	Vctrn nomi;
};

typedef Empleado Vctre [LIM];	//esta es la lista de empleados

//estas son las 4 funciones auxiliares
void LeerVector (ifstream &, Vctre, int &);
Empleado EmpleadoMasAntiguo (const Vctre, int);
void VolcarFich (ofstream &, const Vctre, int);
void AumSal (Vctre, int);

//funcion principal
int main ()
{
	//decl. de var.
	Vctre emp;	//lista
	ifstream f_in;
	ofstream f_out;
	Empleado buf;	//viejo
	int y = 0;	//contador
	
	//lectura de datos
	f_in.open("empleado.txt");
		if (f_in.fail())
	    	cout << "Error abriendo fichero para lectura"<< endl;
	  	else 
			{
				LeerVector (f_in, emp, y);	//lectura
				f_in.close();	//aqui se cierra el file
				
				cout << "El empleado mas antiguo es..." << endl;
				buf = EmpleadoMasAntiguo (emp, y);	//viejo
				
				//impresion de datos del viejo
				cout << buf.nombre << endl;
				cout << buf.pos << endl;
				cout << buf.fec << endl;
				cout << buf.fij << endl;
				for (unsigned int z = 0; z < MES; z++)	//estoy seguro de que es asi
					cout << buf.nomi[z] << " ";
				cout << endl;
				
				AumSal (emp, y);	//subida de sueldo
				
				f_out.open("empleadosNuevo.txt");	//escritura de datos
		    	if (f_out.fail())
		      		cout << "Error abriendo fichero para escritura"<< endl;
		    	else 
		    	{
		        	VolcarFich (f_out, emp, y);	//o mejor dicho vuelque de datos
		    		f_out.close();	//fin del vuelque
		    		
		    		f_out.open("empleadosBuevo.html");	//esto es lo del .html. Mucho texto
					if (f_out.fail())
		      		cout << "Error abriendo fichero para escritura"<< endl;
		    		else 	//juraria que esto podria seer otra funcion, pero se especifica que se hace en el main, so se hace en el main
		    		{
		        		f_out << "<html>" << endl;
						f_out << "<body>" << endl;
						f_out << "<h2>Lista de empleados:<h2>"  << endl;
						
						for ( int z = 0; z < y; z++)
						{
							
							f_out << "<p>" << endl;
							f_out << "<b>Nombre:<b>" << emp[z].nombre << "<br>" << endl;
							f_out << "<b>Puesto:</b>" << emp[z].pos << "<br>" << endl;
							float thot = 0;
							
							for (unsigned int a = 0; a < MES; a++)
								thot += emp[z].nomi[a];
							f_out << "<b>Salario Total:</b>" << thot << "<br>" << endl;
							f_out << "</p>";
		    			}
		    			
		    			f_out << "</body>" << endl;
		    			f_out << "</html>" << endl;
		    			
						f_out.close();	 //fin de escritura del .html
					}
				}
			}
	return 0;
}

/**
 *
 * Sube el sueldo un 3% a la gente. De nada.
 *
 * @param s la lista donde estan los sueldos a subir 
 * @param t el tamaño de la lista considerandola un vector parcialmente lleno
 * 
 */
void AumSal(Vctre s, int t)
{
	//bucle for porque vectores
	for ( int i = 0; i < t; i++)
		for (unsigned int j = 0; j < MES; j++)	//doble vector porque vector matrioshka
			s[i].nomi[j] *= 1.03;	//aumento
	return;
}

/**
 *
 * Mete datos de empleados en un text file
 *
 * @param [in? out?] f los peromisos o cosas (el canal?) de escritura de datos
 * @param [in] t el vector donde se almacenan cosas a meter
 * @param [in] t el tamaño de elementos en la lista t
 * 
 */
void VolcarFich (ofstream & f, const Vctre t, int w)
{
	//for again pero para meter cosas
	for ( int i = 0; i < w; i++)
	{
		f << t[i].nombre << endl;
		f << t[i].pos << endl;
		f << t[i].fec << endl;
		f << t[i].fij << endl;
		
		for (unsigned int j = 0; j < MES; j++)
			f << to_string(t[i].nomi[j]) << " ";
		f << endl;	//esto es para que lo siguiente es escriba debajo (wow)
	}
	return;
}

/**
 *
 * Saca el empleado mas viejo de una lista de empleados guay mediante innecesariamente complejas maquinaciones.
 *
 * @param [in] pl la lista de gente
 * @param [in] g el limite de la lista (se usa el total de una vez, me hace gracia)
 * @return ost musica (haha jk unless). En verdad es el ganador en esta competicion que es la vejez
 * 
 */
Empleado EmpleadoMasAntiguo (const Vctre pl, int g)
{
	typedef string Vctrm [MES];	//para los meses del año
	
	Vctrm ms;
	
	//Aqui estan todos los meses porque no se me ocurrio que mas hacer 
	ms[0] = "Enero";
	ms[1] = "Febrero";
	ms[2] = "Marzo";
	ms[3] = "Abril";
	ms[4] = "Mayo";
	ms[5] = "Junio";
	ms[6] = "Julio";
	ms[7] = "Agosto";
	ms[8] = "Septiembre";
	ms[9] = "Octubre";
	ms[10] = "Noviembre";
	ms[11] = "Diciembre";
	
	Empleado ost;
	string an, nan = "3000";	//numero grande. Esto estara obsoleto el año 3001.
	int o = 0, ed, k;
	
	//for bucle
	for ( int i = 0; i < g ; i++)
	{
		an = pl[i].fec.substr(pl[i].fec.length() - 4, pl[i].fec.length());
		if (an < nan)	//entiendo que aun siendo strings un numero menor sera siempre menor
		{
			nan = an;	//nuevo liston de año
			ost = pl[i];	
			
			for ( int j = 0; j < MES; j++)	//buscador de meses
			{
				int r = pl[i].fec.find(ms[j]);	
				if ( r != -1)
					o = j;	//nuevo liston de meses
			}
			k = pl[i].fec.find(" "); //mira el dia que es
			ed = stoi (pl[i].fec.substr(0, k));	 //nuevo liston de dias	(los dias siguen siendo strings, creo, pero da igual porque 2 > 1 always
		}
		//Por si mismo año. Desde aqui todo ha sido sufrimiento en el troubleshooting.
		if (an == nan)
		{
			//bucle for grande para buscar meses 
			for ( int j = 0; j < MES; j++)	
				if (pl[i].fec.find(ms[j]) != -1)	
					if (j < o)	//por si el mes es antes (el mes se asocia a un numero de forma ridicula, poco mas)
					{
						o = j;	//nuevo liston (no se si funciona)
						ost = pl[i];
					}	//easy
					else if (j == o)	//buffff
					{
						int h = pl[i].fec.find (" ");	//para separar el numero de lo demas
						if (h != -1)
						{
							string dia = pl[i].fec.substr(0, pl[i].fec.length());	//eso, el dia
							if (stoi(dia) < ed)	//si dia ahora < dia antes, lo mismo dia ahora es antes que dia antes
							{
								ed = stoi(dia);	//eso
								ost = pl[i];
							}
						}
					}	
		}
	}
	return ost;
}

/**
 *
 * Lee una lista de gente desde una lista de gente. Lo chungo es que es lo que mas problemas me ha dado
 *
 * @param [in? out?] f los peromisos o cosas (el canal?) de lectura de datos
 * @param [in & out? (mismas consideraciones y dudas que en ejercicio4practica8)] e el vector donde se almacenan cosas
 * @param ['' '' ''? ('' '' '' '' '' '' '')] t el tamaño de elementos en la lista, el cual se sabra al hacerla
 * 
 */
void LeerVector (ifstream & f, Vctre e, int & t)
{
	//contador de elementos
	int i = 0;
	
	//por aqui se meten los datos en cosas internas del programa pt.1
	getline (f, e[i].nombre);
	getline (f, e[i].pos);
	getline (f, e[i].fec);
	f >> e[i].fij;	//es brutal la cantidad de problemas que me dio olvidar esto. Bien
	
	//bucle for
	for (unsigned int j = 0; j < MES; j++)
		f >> e[i].nomi[j];
		
	i++;	//a contar
	
	//pt. 2 (esto no lo he copiado del ejemplo de los CD's, que conste (un poco si, pero no se le llama a eso aprender?)
	do
	{
		f.ignore();	//sigo sin saber que hace esto exactamente, pero tuve un problema fuerte con sobrepasos del rango en strings usando los comandos .substr en algun estado de este codigo y se debia a que esto estaba aqui. En todo caso, ya esta resuelto y esto es necesario para que vaya bien.
		getline (f, e[i].nombre);
		getline (f, e[i].pos);
		getline (f, e[i].fec);
		f >> e[i].fij;	// ):<
		
		//lo mismo que antes
		for (unsigned int j = 0; j < MES; j++)
			f >> e[i].nomi[j];
		i++;	//contar
	}
	while (!f.eof());
	
	t = i;	//esto es porque la t es el valor de salida.
	return;
}
