#include<iostream>
#include"Operaciones.cpp"
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    ALEXANDER MAILA - jamaila@espe.edu.ec
		    JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
		    JORGE NACIMBA - janasimba4@espe.edu.ec

	
	ENUNCIADO: REALIZAR UN TETRIS 				
				
	FECHA DE CREACION:        29-08-2022	
	FECHA DE MODIFICACION:    29-08-2022*/
using namespace std;

int main()
{
    float valorx[100];
	Operaciones op;
	op.logaritmica(valorx);
	op.cuadratica(valorx);
	op.lineal(valorx);

}

