/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:13:50 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:53:40 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor for 🐩 DOG called" << std::endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
	std::cout << "Default copy-constructor for 🐩 DOG called" << std::endl;
}

Dog&	Dog::operator=(const Dog &other) {
	this->type = other.getType();

	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "🐩 DOG: WUFFWUFFWUFFFFWUUUUFFFF" << std::endl;
}

Dog::~Dog() {
	delete(brain);
	std::cout << "Default destructor for 🐩 DOG called" << std::endl;
}
