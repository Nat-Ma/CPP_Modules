/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 13:27:20 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/16 13:45:29 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {};

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {};

// static_cast is used to force conversion between types
// std::numeric_limits checks min/max and avoids overflow
// std::strtod converts string to double and stores where it stopped reading
void ScalarConverter::convert(const std::string &lit) {
	// Check for pseudo literals
	if (lit == "nan" || lit == "nanf" || lit == "-inf" ||
		lit == "+inf" || lit == "-inff" || lit == "+inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (lit.find("nan") != std::string::npos) {
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		} else {
			std::string sign = (lit[0] == '-') ? "-" : "";
			std::cout << "float: " << sign << "inff" << std::endl;
			std::cout << "double: " << sign << "inf" << std::endl;
		}
		return;
	}
	// double is the most precise type
	double val;
	// safe conversion to char
	if (lit.length() == 1 && !std::isdigit(lit[0]))
		val = static_cast<double>(lit[0]);
	else {
		char *end;
		// conversion to numeric
		val = std::strtod(lit.c_str(), &end);
		// validating if there is any trailing chars
		if (*end != '\0' && !(*end == 'f' && *(end + 1) == '\0')) {
			std::cout << "Invalid string literal" << std::endl;
			return;
		}
	}

	// Print Results
	std::cout << "char: ";
	if (val < std::numeric_limits<char>::min() || val > std::numeric_limits<char>::max())
		std::cout << "impossible";
	else if (!std::isprint(static_cast<char>(val)))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(val) << "'";
	std::cout << std::endl;

	std::cout << "int: ";
	if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(val);
	std::cout << std::endl;

	// prints both with precision of 1 decimal point
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << val << std::endl;
	return;
};
