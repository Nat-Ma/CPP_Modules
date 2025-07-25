/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:33:56 by nrauh             #+#    #+#             */
/*   Updated: 2025/07/25 14:45:11 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called...!" << std::endl;
	Fixed::setRawBits(0);
}

Fixed::Fixed(const int n)
{
	// formula is n * (1 << fract_bits) or n << fract_bits
	std::cout << "Int constructor called...!" << std::endl;
	fixed = n << fract_bits;
};

Fixed::Fixed(const float f)
{
	std::cout << "Float Constructor called...!" << std::endl;
	fixed = roundf(f * (1 << fract_bits));
};

Fixed::Fixed(const Fixed &other)
{
	// copies the whole object...
	std::cout << "Copy constructor called...!" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called...!" << std::endl;
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
	// std::cout << "Get raw bits member function called...!" << std::endl;
	return (fixed);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "Set raw bits member function called...!" << std::endl;
	fixed = raw;
}

float	Fixed::toFloat(void) const
{
	// formula to convert fixed point values to an int
	// same as ((fixed_point_number) / 256) or (fpn / (1 << 8))
	// std::cout << "Convert fixed-point to float..." << std::endl;
	// needs to be casted otherwise the float is not shown...
	return ((float)getRawBits() / (float)(1 << fract_bits));
}

int	Fixed::toInt(void) const
{
	// std::cout << "Convert fixed-point to int...!" << std::endl;
	return (getRawBits() >> fract_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
