#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
	this -> name = "��������������";
	if (a != c || b != d) {
		throw FigureCreateException("������� ������ ���� ������� �����");
	}
	if (A != C || B != D) {
		throw FigureCreateException("���� ������ ���� ������� �����");
	}
};
