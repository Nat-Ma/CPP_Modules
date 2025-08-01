/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:31:08 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:26:55 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called for " << this->name << std::endl;
};

void	ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << std::endl;
		this->energyPoints--;
		std::cout << YELLOW << this->name << " 💣ATTACKS: " << target << PINK << " -> SCAVTRAP ATTACKKKKKKKKK!!!" << RESET << std::endl;
	}
	if (this->energyPoints == 0)
		std::cout << this->name << " KO: 💀💀💀💀💀 Cannot attack!" << std::endl;
	if (this->hitPoints == 0)
		std::cout << this->name << " KO: 💀💀💀💀💀 Cannot attack!" << std::endl;
};

void	ScavTrap::guardGate(void) {
	std::cout << PINK << "🔒🔒🔒 " << this->name << " is now in Gatekeep mode 🔒🔒🔒" << RESET << std::endl;
	std::cout << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap default destructor called for " << name << std::endl;
}







