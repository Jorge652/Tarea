#include <iostream>
#include "Operacion.cpp"
#include "Matriz.cpp"
#include "Validacion.h"
using namespace std;


int main()
{
    int tam;
    Operation op;
    Matriz matrix_1;
    std::cout << "*****CUADRADO MAGICO*******\n";
    cout << "Ingrese la dimension del cuadrado (#impar) ";
    tam = Auxiliar::Validacion::validar_numbers<int>("");
    while (tam % 2 == 0) {
        cout << "Ingrese la dimension del cuadrado (#impar)";
        tam = Auxiliar::Validacion::validar_numbers<int>("");
    }

    matrix_1.set_matriz(op.segmentar(tam));
    op.encerar(matrix_1, tam);
    op.cuboMagico(matrix_1, tam);
    op.print(matrix_1, tam);
}
