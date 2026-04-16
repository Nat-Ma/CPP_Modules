/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:33:55 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/02 12:50:48 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <array>
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T *a;
		unsigned int n;

	public:
		Array();
		Array(const unsigned int ui);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int size() const;
};

#include "Array.tpp"
