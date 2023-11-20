#ifndef PARALL_H
#define PARALL_H
#include "quadrangle.h"
#include "excep.h"

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif