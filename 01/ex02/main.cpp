/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:53:53 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/30 16:05:00 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

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
