#include "triangle.h"
#include "excep.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure() {
	this->name = "Треугольник";
	if ((A + B + C) != 180) {
		throw FigureCreateException("сумма углов не равна 180");
	}
	else {
		this->A = A;
		this->B = B;
		this->C = C;
	}
	this->a = a;
	this->b = b;
	this->c = c;
}

std::string Triangle::get_sides(){
	return ("Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c));
}
std::string Triangle::get_angles(){
	return ("Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C));
}