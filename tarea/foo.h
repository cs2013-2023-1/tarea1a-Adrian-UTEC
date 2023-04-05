#include <iostream>

using namespace std;

class Matriz2D{
friend Matriz2D t(Matriz2D&); //listo
friend ostream& operator<<(ostream&, const Matriz2D&); //listo
friend Matriz2D operator+(const Matriz2D&, const Matriz2D&); //
friend Matriz2D operator-(const Matriz2D&, const Matriz2D&); //
friend Matriz2D operator*(const Matriz2D&, const Matriz2D&); //
friend Matriz2D operator+(const Matriz2D&, float); //
friend Matriz2D operator-(const Matriz2D&, float); //
friend Matriz2D operator*(const Matriz2D&, float); //
friend Matriz2D operator/(const Matriz2D&, float); //
public:
    Matriz2D(); //listo
    Matriz2D(int); //listo
    Matriz2D(int, int); //listo
    Matriz2D(const Matriz2D&); //listo
    Matriz2D(Matriz2D&&); //listo

float get(int, int); //listo
int getFilas(); //listo
int getColumnas(); //listo
private:
    float** ptr;
    int filas;
    int columnas;
};

