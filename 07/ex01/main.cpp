/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 22:44:08 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/02 10:33:05 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int timesTwo(int &n) {
	return n * 2;
}

std::string concatenate(std::string &str) {
	return str + "ing";
}

char replace(char c) {
	if (c == 'a')
		return 'X';
	return c;
}

int main(void) {
	int intArr[] = {1, 2, 3, 4, 5};
	std::string strArr[] = {"go", "land", "listen", "work"};
	char charArr[] = {'a', 'b', 'c', 'd', 'a', 'l'};

	::iter(intArr, ::getLen(intArr), timesTwo);
	::iter(strArr, ::getLen(strArr), concatenate);
	::iter(charArr, ::getLen(charArr), replace);
	return 0;
}
