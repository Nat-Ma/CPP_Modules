/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:49:51 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/16 14:13:35 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

// need to call srand(time(NULL)) once
// to use the current time to ensure the randomness is different
// every time the program starts
int	main(void) {
	// Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    std::cout << "--- TEST1: Random Generation & Identification ---" << std::endl;
    for (int i = 0; i < 5; i++) {
        Base* randomInstance = generate();

        std::cout << " [Pointer]:   ";
        identify(randomInstance);

        std::cout << " [Reference]: ";
        identify(*randomInstance);

        delete randomInstance;
        std::cout << "-----------------------------------" << std::endl;
    }

    std::cout << "\n--- TEST2: Manual Verification ---" << std::endl;
    A a;
    B b;
    C c;

    std::cout << "Should be A: "; identify(&a);
    std::cout << "Should be B: "; identify(b);
    std::cout << "Should be C: "; identify(&c);

    return 0;
}
