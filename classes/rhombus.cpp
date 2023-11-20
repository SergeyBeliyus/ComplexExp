#include "rhombus.h"

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D):Parallelogram (a, b, c, d, A, B, C, D) {
	this->name = "Ромб";
	if (a != b || b != c || c != d || a != c || a != d || b != d) {
		throw FigureCreateException("все стороны должны быть равны");
	}
	if (A != C || B != D) {
		throw FigureCreateException("углы должны быть попарно равны");
	}
};