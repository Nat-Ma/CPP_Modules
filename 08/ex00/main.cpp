/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:00:56 by natalierauh       #+#    #+#             */
/*   Updated: 2026/03/05 17:35:04 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	std::vector<int> v;
	v.push_back(1);
    v.push_back(8);
    v.push_back(3);
	std::deque<int> d;
	d.push_back(2);
	d.push_back(4);
	d.push_back(6);

	try {
		std::vector<int>::iterator v_it = easyfind(v, 1);
		std::cout << "Vector: " << *v_it << std::endl;
		std::deque<int>::iterator d_it = easyfind(d, 6);
		std::cout << "Deque: " << *d_it << std::endl;
		std::vector<int>::iterator v2_it = easyfind(v, 2);
		std::cout << "Vector: " << *v2_it << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
