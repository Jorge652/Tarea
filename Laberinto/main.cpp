#include <iostream>
#include"Operaciones.h"


/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Tema: Laberinto
 * Autor:  Jorge Nasimba, Jimmy Simbaña, Jose Maila 
 * Fecha de creacion: Miercoles, Agosto 17
 * Fecha de modificacion: Jueves, Agosto 18
 * NRC: 4683
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/
using namespace std;

int main(int argc, char** argv) {
	Operaciones op;
	int dim=20,opc,f=10,c=5;
	int **matriz;
	
	do{
		system("cls");
		cout<<"\n\t\tLaberinto"<<endl;
		cout<<"1.Generar matriz"<<endl;
		cout<<"2.Imprimir laberinto"<<endl;
		cout<<"3.Salir"<<endl;
		cout<<"opcion:";cin>>opc;
		switch(opc){
			case 1:
			{
				cout<<"Ingrese el numero de filas:";
				cin>>f;
				cout<<"Ingrese el numero de columnas:";
				cin>>c;
				int **M = op.encerarMatriz(f, c);
				M=op.llenarMatriz(M,f,c);
				op.guardarMatriz("matriz.txt", M,f,c);		
			}	
			break;
			case 2:
			{
				matriz = op.leerMatriz("matriz.txt");
				op.imprimirLaberinto(matriz,f,c);
				system("pause");
			}		
			break;
		}
	}while(opc!=3);
	
	return 0;
}