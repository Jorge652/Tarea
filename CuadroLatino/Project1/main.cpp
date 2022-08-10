#include <iostream>
#include "CuadroLatino.cpp"
#include "Matriz.cpp"
#include "Auxiliar.h"
using namespace std;

int main()
{
	cout << "\nCUADRO LATINO" << endl;
	int dimension;
	
	dimension = Validar::Validation::validation_numbers<double>("Ingrese la dimension");
	Matrix m(dimension);
	CuadroLatino cuadro;
	m.segmentar(); 
	m.encerar();
	cuadro.hacerCuadroLatino(m);
	m.imprimir();
}
