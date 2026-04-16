/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:33:56 by nrauh             #+#    #+#             */
/*   Updated: 2025/07/25 14:41:24 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	fixed = 0;
	std::cout << "Default constructor called...!" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called...!" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment Operator called...!" << std::endl;
	if (this != &other)
		fixed = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called...!" << std::endl;
}

int	Fixed::getRawBits(void) const 
{
	std::cout << "Get raw bits member function called...!" << std::endl;
	return (fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Set raw bits member function called...!" << std::endl;
	fixed = raw;
}
