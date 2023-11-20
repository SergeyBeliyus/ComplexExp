#include "equilaterialtriangle.h"


EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	this->name = "Равносторонний треугольник";
	if (A != 60 || B != 60 || C != 60) {
		throw FigureCreateException("все углы должны быть равны 60");
	}
};