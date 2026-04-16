/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:08:07 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:08:48 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* animals[10];

	for (int i = 0; i < 10/2; i++)
		animals[i] = new Cat();
	std::cout << std::endl;
	
	for (int i = 10/2; i < 10; i++)
		animals[i] = new Dog();
	std::cout << std::endl;	
		
	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
		delete(animals[i]);
	}
	return 0;
}
