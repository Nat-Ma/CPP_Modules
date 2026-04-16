/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:05:59 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/06 15:43:32 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {};

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other): std::stack<T>(other) {};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other) {
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
};

template <typename T>
MutantStack<T>::~MutantStack() {};

template <typename T>

typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
};
