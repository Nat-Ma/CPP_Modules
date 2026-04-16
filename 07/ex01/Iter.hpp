/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 22:39:03 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/02 10:30:44 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename I, typename F>
void iter(I *arr, const size_t len, F fn) {
	for (size_t i = 0; i < len; i++) {
		fn(arr[i]);
		std::cout << fn(arr[i]);
		if (i < len - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

// need to pass the array by reference
// otherwise the compiler looses the info how many elements were in the og array
template <typename L>
size_t getLen(L &arr) {
	return sizeof(arr) / sizeof(arr[0]);
}
