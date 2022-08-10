#pragma once
class Matrix
{
private:
	int** matrix;
	int dim;
public:
	Matrix();
	Matrix(int dim);
	int** get_matrix();
	int get_dim();
	void set_matrix(int**);
	void set_dim(int);
	void segmentar();
	void encerar();
	void ingresar();
	void imprimir();
};

