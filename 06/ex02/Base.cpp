/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:20:22 by natalierauh       #+#    #+#             */
/*   Updated: 2026/04/16 14:13:58 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stddef.h>
#include <iostream>

Base::~Base() {};

// for true random std::rand combined with
Base *generate(void) {
	Base *obj;
	switch(std::rand() % 3)
	{
		case 0:
			obj = new A();
			break;
		case 1:
			obj = new B();
			break;
		case 2:
			obj = new C();
			break;
	}
	return obj;
};

// dynamic_cast to identify pointer
// -> if object is of type X* it returns an address
// otherwise it returns NULL
void identify(Base *p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Object is of type A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Object is of type B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Object is of type C" << std::endl;
	else
		std::cout << "Object could not be identified!" << std::endl;
};

// dynamic_cast to identify reference
// on fail std::bad_cast exception
// must use try & catch block
void identify(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Reference is of type A" << std::endl;
	} catch (std::exception &e) {};

	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Reference is of type B" << std::endl;
	} catch (std::exception &e) {};

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Reference is of type C" << std::endl;
	} catch (std::exception &e) {};
};
