#include "frectangle.h"

FRectangle::FRectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
	this->name = "�������������";
	if (a != c || b != d) {
		throw FigureCreateException("������� ������ ���� ������� �����");
	}
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		throw FigureCreateException("��� ���� ������ ���� 90 ��������");
	}
};