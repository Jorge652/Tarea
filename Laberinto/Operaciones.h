#pragma once
class Operaciones{
	public:
		int** encerarMatriz(int f, int c);
		int** llenarMatriz(int **matriz,int f, int c);
		void guardarMatriz(char *fileName, int **matriz,int filas,int cols);
		int** leerMatriz(char *fileName);
		void imprimirLaberinto(int **matriz,int f, int c);
};