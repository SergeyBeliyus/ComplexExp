#pragma once
#include <iostream>

class FigureCreateException : public std::domain_error {
public:
	FigureCreateException(const std::string& message);
private:
	std::string message;
};
