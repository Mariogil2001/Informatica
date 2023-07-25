/*
	Name: Exercise 4
	Copyright: University of Valencia
	Author: Mario Gil and Luis Petrisor
	Date: 22/12/21 10:14
	Description: 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Persona 
{
	string nombre;
	string telefono;
	string email;
};

const unsigned int MAX = 1000;
typedef Persona VPersona [MAX];

unsigned int Menu ();
void LeerAgendaFich (ifstream &, VPersona, unsigned int &);
Persona LeerPersonaTeclado ();
void InsertarPersonaAgenda (VPersona, unsigned int &, Persona);
void EliminarPersonaAgenda (VPersona, unsigned int &, string);
void ModificarPersonaAgendaTel(VPersona, unsigned int, string, string);
void GuardarAgendaFich (ofstream &, const VPersona, unsigned int);
void MostrarAgendaPantalla (const VPersona, unsigned int);

int main() 
{ 
	VPersona agenda;
	unsigned int opcion, tam; //tamaño actual de la agenda  
	ifstream f_in;
	ofstream f_out;
	Persona p;
	string nom, tel; 
	
	do 
	{
		system("CLS"); // Borra la pantalla
		opcion = Menu ();
		
		switch(opcion) 
		{
		   case 1: 
		      	f_in.open("agenda.txt");
		      	if (f_in.fail())
		        	cout << "Error abriendo fichero para lectura"<< endl;
		      	else 
		      	{
		       		LeerAgendaFich (f_in, agenda, tam);
		       		f_in.close();
		   		}
		     	break;
		  	case 2: 
		  		p = LeerPersonaTeclado ();
		    	InsertarPersonaAgenda (agenda, tam, p);
		    	break;
		  	case 3: 
		  		cout << "Nombre de la persona a eliminar: ";
		  		getline (cin, nom);
		  		EliminarPersonaAgenda (agenda, tam, nom);
		    	break;
			case 4: 
		  		cout << "Nombre de la persona a modificar: ";
		  		getline(cin, nom);
		  		cout << "Nuevo numero de telefono: ";
		  		getline(cin, tel);
		  		ModificarPersonaAgendaTel (agenda, tam, nom, tel);
		    	break;
		  	case 5: 
		    	f_out.open("agendanueva.txt");
		    	if (f_out.fail())
		      		cout << "Error abriendo fichero para escritura"<< endl;
		    	else 
		    	{
		        	 GuardarAgendaFich (f_out, agenda, tam);
		    		f_out.close();
		  		}
		 		break; 
			case 6:
		        MostrarAgendaPantalla (agenda, tam);
		} //switch
	} //while
	while (opcion != 0);

	return 0;
}

unsigned int Menu ()
{
	int menu;
	cout << "1. Leer la agenda desde un fichero, “agenda.txt”." << endl;
	cout << "2. Insertar una nueva persona en la agenda. La persona es antes leída desde teclado." << endl;
	cout << "3. Borrar una persona de la agenda. Se lee desde teclado el nombre a eliminar. Al eliminar del vector, no dejar huecos. Es necesario reorganizar el vector.\n";
	cout << "4. Modificar el teléfono de una persona conocido su nombre. Se lee desde el teclado su nombre y el nuevo teléfono." << endl;
	cout << "5. Volcar a un fichero nuevo la información actual de la agenda, ”agendanueva.txt”.\n";
	cout << "6. Mostrar en pantalla la información actual de la agenda.\n" ;
	cout << "0. Salir\n";
	cin >> menu;
	return menu;
	//complentar
}

void LeerAgendaFich (ifstream & f, VPersona v, unsigned int & t)
{
	//completar
}

Persona LeerPersonaTeclado ()
{
	//completar
}

void InsertarPersonaAgenda (VPersona v, unsigned int & t, Persona per)
{
	//Completar
}

void EliminarPersonaAgenda (VPersona v, unsigned int & t, string nom)
{
	//completar
}

void ModificarPersonaAgendaTel(VPersona v, unsigned int t, string nom, string tel)
{
	//completar
}

void GuardarAgendaFich (ofstream & f, const VPersona v, unsigned int t)
{
	//completar
}

void MostrarAgendaPantalla (const VPersona v, unsigned int t)
{ 
	//completar
}

