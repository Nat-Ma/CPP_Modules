/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 22:39:03 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/16 18:50:08 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename I, typename F>
void iter(I *arr, const size_t len, F fn) {
	for (size_t i = 0; i < len; i++)
		fn(arr[i]);
}

// need to pass the array by reference
// otherwise the compiler looses the info how many elements were in the og array
template <typename L>
size_t getLen(L &arr) {
	return sizeof(arr) / sizeof(arr[0]);
}

template <typename T>
void printEl(T &x) { 
	std::cout << x << " ";
}
