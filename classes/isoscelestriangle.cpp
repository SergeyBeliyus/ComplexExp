#include "isoscelestriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	this->name = "�������������� �����������";
	if (A != C) {
		throw FigureCreateException("���� � � � ������ ���� �����");
	}
	if (a != c) {
		throw FigureCreateException("������� � � � ������ ���� �����");
	}
};