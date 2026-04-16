/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:38:32 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/05 17:30:53 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(): a(NULL), n(0) {};

template <typename T>
Array<T>::Array(const unsigned int n): n(n) {
	// creates an array of n elements
	if (this->n > 0)
		this->a = new T[n]();
	else
		this->a = NULL;
	for (unsigned int i = 0; i < n; i++) {
		std::cout << a[i];
		if (i < n - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
};

// da a auf NULL gesetzt ist, kann delete[] verwendet werden
template <typename T>
Array<T>::Array(const Array &other): a(NULL), n(0) {
	*this = other;
};

template <typename T>
Array<T>& Array<T>::operator=(const Array &other) {
	if (this != &other) {
		delete[] this->a;
		this->n = other.n;
		if (this->n > 0) {
			this->a = new T[this->n]();
			for (unsigned int i = 0; i < this->n; i++) {
				this->a[i] = other.a[i];
			}
		} else {
			this->a = NULL;
		}
	}
	return *this;
};

template <typename T>
unsigned int Array<T>::size() const {
	return n;
};

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= n)
		throw std::out_of_range("Index is out of bounds!");
	return this->a[index];
};

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= n)
		throw std::out_of_range("Index is out of bounds!");
	return this->a[index];
};

template <typename T>
Array<T>::~Array() {
	delete[] this->a;
};
