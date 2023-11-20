#include "righttriangle.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	this->name = "Прямоугольный треугольник";
	if (C != 90) {
		throw FigureCreateException("угол С должен быть равен 90");
	}
};