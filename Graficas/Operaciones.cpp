#include <iostream>
#include "Operaciones.h"
#include<fstream>
#include<math.h>
using namespace std;
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    ALEXANDER MAILA - jamaila@espe.edu.ec
		    JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
		    JORGE NACIMBA - janasimba4@espe.edu.ec

	
	ENUNCIADO: REALIZAR UN TETRIS 				
				
	FECHA DE CREACION:        29-08-2022	
	FECHA DE MODIFICACION:    29-08-2022*/
void Operaciones::logaritmica(float valorx[])
{
	ofstream file;
    file.open("logaritmica.txt");
//Logaritmica
    for(int i=0;i<=10;i++){
        valorx[i]=log10(i);
        //cout<<i<<"\t"<<valorx[i]<<endl;
        file<<i<<"\t"<<valorx[i]<<endl;
    }
    file.close();
}
void Operaciones::cuadratica(float valorx[])
{
	//Cuadratica
	ofstream file;
   file.open("cuadratica.txt");
   for(int i=0;i<=5;i++){
        valorx[i]=pow(i,2);
        //cout<<i<<"\t"<<valorx[i]<<endl;
        file<<i<<"\t"<<valorx[i]<<endl;
    }
    file.close();
}
void Operaciones::lineal(float valorx[])
{
	//Lineal
	ofstream file;
	file.open("lineal1.txt");
   for(int i=0;i<=20;i++){
        valorx[i]=abs(i);
        file<<i<<"\t"<<valorx[i]<<endl;
    }
    file.close();
    cout<<"archivo generado"<<endl;
}
