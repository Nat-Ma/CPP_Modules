/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 22:44:08 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/17 15:35:22 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void timesTwo(int &n) {
	n *= 2;
}

void concatenate(std::string &str) {
	str += "ing";
}

void replace(char &c) {
	if (c == 'a')
		c = 'X';
}

int main(void) {
	int intArr[] = {1, 2, 3, 4, 5};
	const int constIntArr[] = {6, 7, 8, 9, 10};
	std::string strArr[] = {"go", "land", "listen", "work"};
	char charArr[] = {'a', 'b', 'c', 'd', 'a', 'l'};

	std::cout << "Ints times two: ";
	::iter(intArr, ::getLen(intArr), timesTwo);
	::iter(intArr, ::getLen(intArr), ::printEl<int>);
	std::cout << std::endl;
	std::cout << "Const int: ";
	::iter(constIntArr, ::getLen(constIntArr), ::printEl<int>);
	std::cout << std::endl;
	std::cout << "Strings: ";
	::iter(strArr, ::getLen(strArr), concatenate);
	::iter(strArr, ::getLen(strArr), ::printEl<std::string>);
	std::cout << std::endl;
	std::cout << "Chars: ";
	::iter(charArr, ::getLen(charArr), replace);
	::iter(charArr, ::getLen(charArr), ::printEl<char>);
	std::cout << std::endl;
	return 0;
}
