#include <iostream>
#include "figure.h"

Figure::Figure(){
	this->name = "Фигура";
}

std::string Figure::get_name() {
	return name;
}

std::string Figure::get_sides() {
	return "Нет сторон";
}
std::string Figure::get_angles() {
	return "Нет углов";
}

