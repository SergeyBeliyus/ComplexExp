#include <iostream>
#include "windows.h"

#include "classes/figure.h"
#include "classes/triangle.h"
#include "classes/righttriangle.h"
#include "classes/isoscelestriangle.h"
#include "classes/equilaterialtriangle.h"
#include "classes/quadrangle.h"
#include "classes/frectangle.h"
#include "classes/square.h"
#include "classes/parallelogram.h"
#include "classes/rhombus.h"

#include "classes/excep.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {
		Triangle fig1(10, 20, 30, 50, 60, 70);
		std::cout << fig1.get_name() << " (" << fig1.get_sides() << "; " << fig1.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		RightTriangle fig2(10, 20, 30, 50, 60, 90);
		std::cout << fig2.get_name() << " (" << fig2.get_sides() << "; " << fig2.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		IsoscelesTriangle fig3(10, 20, 30, 50, 60, 70);
		std::cout << fig3.get_name() << " (" << fig3.get_sides() << "; " << fig3.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		EquilateralTriangle fig4(10, 20, 30, 50, 60, 70);
		std::cout << fig4.get_name() << " (" << fig4.get_sides() << "; " << fig4.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		Quadrangle fig5(10, 20, 30, 40, 50, 60, 70, 80);
		std::cout << fig5.get_name() << " (" << fig5.get_sides() << "; " << fig5.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		FRectangle fig6(10, 20, 30, 40, 50, 60, 70, 80);
		std::cout << fig6.get_name() << " (" << fig6.get_sides() << "; " << fig6.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		Square fig7(10, 20, 30, 40, 50, 60, 70, 80);
		std::cout << fig7.get_name() << " (" << fig7.get_sides() << "; " << fig7.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		Parallelogram fig8(10, 20, 30, 40, 50, 60, 70, 80);
		std::cout << fig8.get_name() << " (" << fig8.get_sides() << "; " << fig8.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	try {
		Rhombus fig9(10, 20, 30, 40, 50, 60, 70, 80);
		std::cout << fig9.get_name() << " (" << fig9.get_sides() << "; " << fig9.get_angles() << ") создан" << std::endl;
	}
	catch (const FigureCreateException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
}