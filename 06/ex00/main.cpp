/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:27:34 by natalierauh       #+#    #+#             */
/*   Updated: 2026/02/27 14:33:13 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[]) {
	if (argc == 2) {
		ScalarConverter::convert(argv[1]);
		return 0;
	}
	std::cout << "Error: Needs exactly 1 argument!" << std::endl;
	return 1;
}
