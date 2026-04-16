/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:17:43 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:53:03 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "Default constructor for 🐖 Wrong CAT called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	*this = other;
	std::cout << "Default copy-constructor for 🐖 Wrong CAT called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &other) {
	this->type = other.getType();

	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "🐖 Wrong Cat: MMEEEEOOOOOWWWWWWWW" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Default destructor for 🐖 Wrong CAT called" << std::endl;
}
