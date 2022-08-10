#pragma once
class Matriz
{
private:
	int** matrix;

public:
	Matriz() = default;
	int** get_matriz();
	void set_matriz(int**);
};
