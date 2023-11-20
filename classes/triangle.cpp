#include "triangle.h"
#include "excep.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure() {
	this->name = "�����������";
	if ((A + B + C) != 180) {
		throw FigureCreateException("����� ����� �� ����� 180");
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
	return ("�������: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c));
}
std::string Triangle::get_angles(){
	return ("����: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C));
}