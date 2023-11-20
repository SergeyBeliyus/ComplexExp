#include "isoscelestriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	this->name = "Равнобедренный треугольник";
	if (A != C) {
		throw FigureCreateException("углы А и С должны быть равны");
	}
	if (a != c) {
		throw FigureCreateException("стороны а и с должны быть равны");
	}
};