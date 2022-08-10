#include "Operacion.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"
#include <iostream>
using namespace std;

void Operation::cuboMagico(Matriz matrix, int _long)
{
    int limit = _long * _long;
    int column = _long / 2;
    cout<<"Numero magico: "<<_long*(limit+1)/2;
    int row = 0;
	
    for (int i = 1; i <= limit; i++) {
    	
        if (*(*(matrix.get_matriz() + row) + column) != 0) {
            row = row + 2;
            if (row >= _long) {
                row = row - _long;
            }
            column = column - 1;
            if (column == -1) {
                column = _long - 1;
            }
        }
        
        *(*(matrix.get_matriz() + row) + column) = i;
        
        row = row - 1;
        if (row == -1) {
            row = _long - 1;
        }
        column = column + 1;
        if (column == _long) {
            column = 0;
        }
    }
}
int** Operation::segmentar(int dim) {
    Matriz matrix;
    int j;
    matrix.set_matriz((int**)malloc(dim * sizeof(int*)));
    for (j = 0; j < dim; j++) {
        *(matrix.get_matriz() + j) = (int*)malloc(dim * sizeof(int));
    }
    return matrix.get_matriz();
}
void Operation::encerar(Matriz matrix, int dim) {
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            *(*(matrix.get_matriz() + i) + j) = 0;
}

void Operation::print(Matriz matrix, int dim) {
    int i, j;
    printf("\n");
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d", *(*(matrix.get_matriz() + i) + j));
            cout << "\t";
        }
        printf("\n");
    }
}



