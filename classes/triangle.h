#ifndef TRIANGLE_H
#define TRIANGLE_H
	#include <string>
	#include "figure.h"

	class Triangle : public Figure {
	protected:
		int a, b, c, A, B, C;
	public:
		Triangle(int a, int b, int c, int A, int B, int C);
		std::string get_sides() override;
		std::string get_angles() override;
	};

#endif // FOO_HPP