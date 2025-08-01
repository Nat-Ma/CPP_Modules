/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:28:35 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:26:55 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor called for " << this->name << std::endl;
};

void	FragTrap::highFivesGuys(void) {
	std::cout << this->name << " 🖐️ HIGH FIVE was requested " << std::endl;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap default constructor called for " << this->name << std::endl;
}
