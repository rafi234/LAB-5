#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Matrix
{
private:
    double **mat = nullptr;
    int x, y;

public:
    Matrix(int, int);
    Matrix(int);
    Matrix(string, string);
    Matrix operator+(Matrix&);
    Matrix operator-(Matrix&);
    Matrix operator*(Matrix&);
    void CreateMatrix_1();
    void CreateMatrix_2();
    Matrix substract(Matrix&);
    Matrix add(Matrix&);
    Matrix multiply(Matrix&);
    int cols();
    int rows();
    void set(int, int, double);
    double get(int, int);
    void print();
    void store(string, string);
};