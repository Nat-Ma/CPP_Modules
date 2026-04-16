/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:17:17 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:52:02 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "T-Rex";
	std::cout << "Default constructor for 🦖 WRONG ANIMAL called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
	std::cout << "Default copy-constructor for 🦖 WRONG ANIMAL called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.getType();

	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "🥴: I AM NOT AN ANIMAL" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Default destructor for 🦖 WrongANIMAL called" << std::endl;
}
