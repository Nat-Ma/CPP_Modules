/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:51:40 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/06 14:53:06 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Every time a vector runs out of space, it has to find a new,
// larger block of memory, copy all your old numbers there, and delete the old block.
// If you know you will store $N$ numbers, calling _numbers.reserve(N) tells the vector:
// "Grab enough memory for $N$ items right now so you never have to reallocate again."

Span::Span(unsigned int N): N(N) {
	// reserve(n) allocates Memory for N ints
	// but keeps the vector empty (size 0)
	// resize(n) would fill it with N zeros immediately
	this->storage.reserve(N);
};

Span::Span(const Span &other) {
	*this = other;
};

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->N = other.N;
		this->storage = other.storage;
	}
	return *this;
};

Span::~Span() {};

void Span::addNumber(const int num) {
	if (this->storage.size() >= N)
		throw std::out_of_range("Error: Span is already full!");
	this->storage.push_back(num);
};

int Span::shortestSpan() const {
	if (this->storage.size() < 2)
		throw std::runtime_error("Not enough numbers in the span!");
	std::vector<int> tmp = storage;
	std::sort(tmp.begin(), tmp.end());
	// this gets us the int max 2,147,483,647, so the highest possible nr
	int shortest = std::numeric_limits<int>::max();

	// then every difference between each two numbers is compared with each other
	for (size_t i = 0; i < tmp.size() - 1; ++i) {
		int diff = tmp[i + 1] - tmp[i];
		if (diff < shortest)
			shortest = diff;
	}

	return shortest;
};

int Span::longestSpan() const {
	if (this->storage.size() < 2)
		throw std::runtime_error("Not enough numbers in span!");
	std::vector<int>::const_iterator min = std::min_element(this->storage.begin(), this->storage.end());
	std::vector<int>::const_iterator max = std::max_element(this->storage.begin(), this->storage.end());

	return (*max - *min);
};
