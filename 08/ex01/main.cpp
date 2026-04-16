/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:48:46 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/06 14:41:22 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.cpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

int	main() {
	// std::srand(time(NULL));
	int n;

	std::cout << ">>>>> TEST 10.000 NUMS <<<<<" << std::endl;
	n = 10000;
	std::vector<int> bigNumbers;
	Span s(n);
	for (int i = 0; i < n; i++)
		bigNumbers.push_back(i);
	try {
		s.addRange(bigNumbers.begin(), bigNumbers.end());
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << ">>>>> TEST 5 NUMS <<<<<" << std::endl;
	n = 5;
	Span s2(n);
	s2.addNumber(3);
	s2.addNumber(4);
	s2.addNumber(10);
	s2.addNumber(100);
	s2.addNumber(40);
	try {
		std::cout << s2.shortestSpan() << std::endl;
		std::cout << s2.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << ">>>>> TEST SAME NUM TWICE <<<<<" << std::endl;
	n = 5;
	Span s3(n);
	s3.addNumber(3);
	s3.addNumber(3);
	s3.addNumber(10);
	s3.addNumber(100);
	s3.addNumber(40);
	try {
		std::cout << s3.shortestSpan() << std::endl;
		std::cout << s3.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << ">>>>> TEST INVALID <<<<<" << std::endl;
	n = 5;
	Span s4(n);
	s4.addNumber(3);
	try {
		std::cout << s4.shortestSpan() << std::endl;
		std::cout << s4.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << ">>>>> SUBJECT TEST CASE <<<<<" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
};
