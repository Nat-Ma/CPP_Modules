/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:26:53 by nrauh             #+#    #+#             */
/*   Updated: 2025/07/25 13:14:45 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// Copy Assignment Operator Overload -> deep copy, useful for dynamic resources
// allows proper cleanup

class Fixed
{
private:
	int					fixed;
	static const int	fract_bits = 8; // will always be 8

public:
	Fixed(); // Default
	Fixed(const Fixed &other); // Copy Constructor
	Fixed &operator=(const Fixed &other); // Copy Assignment Operator Overload
	~Fixed();
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};
