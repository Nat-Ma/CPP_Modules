/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ComplexType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:06:43 by nrauh             #+#    #+#             */
/*   Updated: 2026/04/17 15:17:33 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Template.hpp"

// Test Funktion
class ComplexType {
	private:
		int _n;
		
	public:
		ComplexType() : _n(0) {};
		ComplexType(int n) : _n(n) {};

		// These operators allow swap() to work
		ComplexType &operator=(ComplexType &a) { _n = a._n; return *this; }

		// These operators allow min() and max() to work
		bool operator==(ComplexType const & rhs) const { return (this->_n == rhs._n); }
		bool operator!=(ComplexType const & rhs) const { return (this->_n != rhs._n); }
		bool operator>(ComplexType const & rhs) const { return (this->_n > rhs._n); }
		bool operator<(ComplexType const & rhs) const { return (this->_n < rhs._n); }
		bool operator>=(ComplexType const & rhs) const { return (this->_n >= rhs._n); }
		bool operator<=(ComplexType const & rhs) const { return (this->_n <= rhs._n); }

		int get_n() const { return _n; }
};

// Overload the << operator so we can print ComplexType objects
std::ostream & operator<<(std::ostream & o, const ComplexType & a) {
    o << a.get_n();
    return o;
}
