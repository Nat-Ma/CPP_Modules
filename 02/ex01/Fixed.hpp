/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:26:53 by nrauh             #+#    #+#             */
/*   Updated: 2025/07/25 14:26:36 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// Copy Assignment Operator Overload -> deep copy, useful for dynamic resources
// allows proper cleanup
// operator overload -> extend the meaning of an operator (+|-|*|etc...)
// to calculate custom objects and not only inbuilt types

class Fixed
{
private:
	int					fixed;
	static const int	fract_bits = 8; // will always be 8

public:
	Fixed(); // Default
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &other); // Copy Constructor
	Fixed &operator=(const Fixed &other); // Copy Assignment Operator Overload
	~Fixed();
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
