#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "parallelogram.h"
#include "excep.h"


class Rhombus : public Parallelogram {
public:
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif