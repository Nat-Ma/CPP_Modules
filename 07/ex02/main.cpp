/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:33:46 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/02 13:16:40 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void) {
	try {
        Array<int> original(5);
        original[0] = 100;

        Array<int> kopie = original; // Copy-Konstruktor
        kopie[0] = 42;

        std::cout << "Original[0]: " << original[0] << " (sollte 100 sein)" << std::endl;
        std::cout << "Kopie[0]: " << kopie[0] << " (sollte 42 sein)" << std::endl;

        // Test Out of Bounds
        std::cout << original[10] << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Abgefangen: " << e.what() << std::endl;
    }
	return 0;
};
