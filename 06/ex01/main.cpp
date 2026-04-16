/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:17:49 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/16 14:02:18 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void) {
	Data myData;
	myData.name = "Test";
	Data* ogPtr = &myData;
	std::cout << "Original Ptr:       " << ogPtr << std::endl;
	uintptr_t uiPtr = Serializer::serialize(ogPtr);
	std::cout << "Serialized uintptr: " << uiPtr << std::endl;
	Data* dataPtr = Serializer::deserialize(uiPtr);
	std::cout << "Deserialized Ptr:   " << dataPtr << std::endl;
	if (ogPtr == dataPtr)
		std::cout << "Both pointers are the same!" << std::endl;
	return 1;
}
