/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:21:31 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/16 14:01:06 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {};

Serializer::Serializer(const Serializer &other) {
	*this = other;
}

Serializer &Serializer::operator=(const Serializer &other) {
	(void)other;
	return (*this);
}

Serializer::~Serializer(void) {};

// reinterpret_cast is standard cpp way to convert a ptr to int type and vice verca
// uintptr is an unsigned int that is big enough to hold a ptr
// serialize -> take memory address 0x7ff... as plain nbr
// deserialize -> take nbr and treat as memory addr
uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
};

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
};
