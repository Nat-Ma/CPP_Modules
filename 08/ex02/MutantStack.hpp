/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:55:17 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/06 15:42:46 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack &other);
		~MutantStack();

		// container_type is a typedef inside std::stack
		// this is a iterator type definition
		typedef typename std::stack<T>::container_type::iterator iterator;

		// expose the protected member of stack "c"
		// and make it available in begin and end
		// c is usually a std::deque and protected
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"
