#include "square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : FRectangle(a, b,c,d,A,B,C,D) {
	Square::name = " вадрат";
	if (a != b || b != c || c != d || a != c || a != d || b != d) {
		throw FigureCreateException("все стороны должны быть равны");
	}
};
