/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:16:53 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:46:20 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "T-Rex";
	std::cout << "Default constructor for 🦖 ANIMAL called" << std::endl;
}

Animal::Animal(const Animal &other) {
	*this = other;
	std::cout << "Default copy-constructor for 🦖 ANIMAL called" << std::endl;
}

Animal&	Animal::operator=(const Animal &other) {
	this->type = other.getType();

	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "🦖 T-Rex: RROOOAAAAARRRRRRRRR" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->type);
}

Animal::~Animal() {
	std::cout << "Default destructor for 🦖 ANIMAL called" << std::endl;
}
