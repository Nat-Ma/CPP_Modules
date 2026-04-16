/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:22:44 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/05 17:32:00 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <exception>

// sequence containers is vector, inplace_vector, array, hive, deque, list, forward list...
// associative containers set, map, multiset, multimap
// unordered assoc. cont. unordered_set, unordered_map etc...
// container adaptors stack, quere, priority_queue, flat_set|map|multiset|multimap
// views span, mdspan

class NotFoundException : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Error: Val not found in container";
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int n) {
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFoundException();
	return it;
};
