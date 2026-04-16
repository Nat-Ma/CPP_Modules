/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:29:04 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/16 13:33:00 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cctype>

// it is a static class (utility class) that acts as a container for functions
// that dont require internal state or data storage
// use when grouping related logic without object overhead

// constructor and deconstructor are private
// therefore cannot be instantiated by the user
class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();

	public:
		// the static member fn belongs to the class itself
		// not to a specific instance
		static void convert(const std::string &lit);
};
