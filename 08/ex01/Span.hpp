/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:48:50 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/06 14:46:05 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <iostream>
#include <iterator>
#include <vector>

class Span {
	private:
		unsigned int N;
		std::vector<int> storage;

	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(const int num);
		int shortestSpan() const;
		int longestSpan() const;

		template <typename T>
		void addRange(T begin, T end) {
			unsigned int size = std::distance(begin, end);

			if (this->storage.size() + size > this->N)
				throw std::runtime_error("Error: Span has not enough space!");

			this->storage.insert(this->storage.end(), begin, end);
		}
};
