#ifndef FRECT_H
#define FRECT_H

#include "quadrangle.h"
#include "excep.h"


class FRectangle : public Quadrangle {
public:
	FRectangle(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif