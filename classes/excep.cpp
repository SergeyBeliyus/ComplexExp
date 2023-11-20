#include "excep.h"

FigureCreateException::FigureCreateException(const std::string& message) : std::domain_error(message) {};