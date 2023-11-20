#ifndef QUAD_H
#define QUAD_H

#include "figure.h"
#include "excep.h"
#include <string>

class Quadrangle : public Figure {
protected:
	int a, b, c, d, A, B, C, D;
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string get_sides() override;
	std::string get_angles() override;
};

#endif