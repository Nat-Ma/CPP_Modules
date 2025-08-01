/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:16:13 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:53:26 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor for 🐈 CAT called" << std::endl;
}

Cat::Cat(const Cat &other) {
	*this = other;
	std::cout << "Default copy-constructor for 🐈 CAT called" << std::endl;
}

Cat&	Cat::operator=(const Cat &other) {
	this->type = other.getType();

	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "🐈 Cat: MMEEEEOOOOOWWWWWWWW" << std::endl;
}

Cat::~Cat() {
	delete(brain);
	std::cout << "Default destructor for 🐈 CAT called" << std::endl;
}
