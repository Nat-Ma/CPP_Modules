/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:16:59 by nrauh             #+#    #+#             */
/*   Updated: 2026/04/16 18:23:27 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// compiler braucht die definition des templates direkt 
// deswegen ist dies nicht in einer separaten .cpp file
template <typename T>
void swap(T &x, T &y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
};

template <typename U>
U min(U x, U y) {
	if (x == y)
		return y;
	else if (x < y)
		return x;
	else
		return y;
};

template <typename V>
V max(V x, V y) {
	if (x == y)
		return y;
	else if (x > y)
		return x;
	else
		return y;
};
