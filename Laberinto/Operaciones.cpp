#include <iostream>
#include "Operaciones.h"
#include <time.h>
using namespace std;
int** Operaciones::encerarMatriz(int f, int c){
	int **matriz = new int*[f];	
	for (int i = 0; i < f; i++) {
		matriz[i] = new int[c];
		for (int j = 0; j < c; j++) {
			*(*(matriz+i)+j) = 0;
		}
	}
	return matriz;
}

int** Operaciones::llenarMatriz(int **matriz,int f, int c){
	for (int i = 1; i < f-1; i++) {
		for (int j = 1; j < c-1; j++) {
			*(*(matriz+i)+j) = 1 + rand() % (3 - 1);;
		}
	}
	return matriz;
}

void Operaciones::guardarMatriz(char *fileName, int **matriz,int filas,int cols){
	FILE *fp = fopen(fileName, "w");
	if (fp == NULL) {
		exit(EXIT_FAILURE);
	}
	char linea[80];
	sprintf(linea, "%d  %d\n", filas, cols); //se guarda la fila y columana de la matriz 
	fputs(linea, fp);
	for (int i = 0; i < filas; i++) {
		linea[0] = '\0';
		for (int j = 0; j < cols; j++) {
			char buffer[10];
			sprintf(buffer, "%d ", matriz[i][j]);
			strcat(linea, buffer);
		}
		int len = strlen(linea);
		linea[len - 1] = '\n';
		fputs(linea, fp);
	}
	fclose(fp);
}

int** Operaciones::leerMatriz(char *fileName){
	int filas=0,cols=0;
	FILE *fp = fopen(fileName, "r");
	if (fp == NULL) {
		exit(EXIT_FAILURE);
	}
	char linea[80];
	fgets(linea, 79, fp); 
	char *token = strtok(linea, "  ");//aqui se obtiene la dimension
	filas = atoi(token);
	token = strtok(NULL, " ");
	cols = atoi(token);
	
	int **matriz = new int*[filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new int[cols];
		fgets(linea,79, fp);
		token = strtok(linea, " ");
		matriz[i][0] = atoi(token);
		for (int j = 1; j < cols; j++) {
			token = strtok(NULL, " ");
			matriz[i][j] = atoi(token);
		}
	}
	fclose(fp);
	return matriz;
}

void Operaciones::imprimirLaberinto(int **matriz,int f, int c){
	
	printf("\t\t%c",205);
	for(int i=0;i<f;i++){
		if(i!=0)
			cout<<"\t\t";
		for(int j=0;j<c;j++){
			
			if(i==1 && j==0)//esquina
				printf("%c",187);
				
			if(i==0 && j>0 && j<c-1)//linea horizontal sup
				printf("%c",205);
				
			if(i==0 && j==c-1)
				printf("%c",187);//esquina
				
			if(j==0 && i>1 && i<=f-2)//linea vertical izq
				printf("%c",186);
			
			if(*(*(matriz+i)+j)==1)
				cout<<" ";
				
		    if(*(*(matriz+i)+j)==2)
				printf("%c",219);
							
		    if(i==f-1 && j==0)//esquina
				printf("%c",200);
				
			if(i==f-1 && j>0 && j<c-2)//linea horizontal inf
				printf("%c",205);
				
			if(i==f-1 && j==c-1)//esquina
				printf("%c",188);
				
			if(j==c-1 && i>0 && i<=f-2)//linea vertical der
				printf("%c",186);
			if(i==f-1 && j==c/2)
				cout<<" ";
		}
		printf("\n");
	}
}