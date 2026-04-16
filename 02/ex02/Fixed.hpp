/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:26:53 by nrauh             #+#    #+#             */
/*   Updated: 2025/07/25 16:11:51 by nrauh            ###   ########.fr       */
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
	// comparison operator functions
	int					operator>(const Fixed other) const;
	int					operator<(const Fixed other) const;
	int					operator>=(const Fixed other) const;
	int					operator<=(const Fixed other) const;
	int					operator==(const Fixed other) const;
	int					operator!=(const Fixed other) const;
	// arithmetic operator functions
	float				operator+(const Fixed other) const;
	float				operator-(const Fixed other) const;
	float				operator*(const Fixed other) const;
	float				operator/(const Fixed other) const;
	// prefix in-/decrement functions
	Fixed				operator++(void);
	Fixed				operator--(void);
	// postfix in- /decrement functions
	Fixed				operator++(int);
	Fixed				operator--(int);

	// overloaded member fns
	static Fixed		&min(Fixed &first, Fixed &second);
	static const Fixed	&min(const Fixed &first, const Fixed &second);
	static Fixed		&max(Fixed &first, Fixed &second);
	static const Fixed	&max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
