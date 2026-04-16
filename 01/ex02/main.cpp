/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:53:53 by natalierauh       #+#    #+#             */
/*   Updated: 2025/06/20 16:54:02 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// ref vs pointer
// ref: is an alias not a copy, cannot be reassigned, cannot be NULL
// use -> avoid copies safely, modify the argument
// pointer: can be NULL, alloc/dealloc memory, reassigning
int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string &strRef = str;

	std::cout << "Memory Address: " << &str << std::endl;
	std::cout << "Memory Address: " << strPtr << std::endl;
	std::cout << "Memory Address: " << &strRef << std::endl;

	std::cout << "Value: " << str << std::endl;
	std::cout << "Value pointed to by ptr: " << *strPtr << std::endl;
	std::cout << "Value pointed to by ref: " << strRef << std::endl;
	return (1);
}
