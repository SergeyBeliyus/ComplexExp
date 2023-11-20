#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>

	class Figure {
	protected:
		std::string name;
	public:
		Figure();
		std::string get_name();
		virtual std::string get_sides();
		virtual std::string get_angles();
	};

#endif // FOO_HPP