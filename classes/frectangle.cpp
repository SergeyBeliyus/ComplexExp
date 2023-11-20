#include "frectangle.h"

FRectangle::FRectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
	this->name = "ѕр€моугольник";
	if (a != c || b != d) {
		throw FigureCreateException("стороны должны быть попарно равны");
	}
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		throw FigureCreateException("все углы должны быть 90 градусов");
	}
};