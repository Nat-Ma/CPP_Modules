/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:37:08 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:32:56 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iomanip>

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap default constructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "Clap Trap copy-constructor has been called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other) {
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap default destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << std::endl;
		this->energyPoints--;
		std::cout << YELLOW << this->name << " 💣ATTACKS: " << target << RESET << std::endl;
	}
	if (this->energyPoints == 0)
		std::cout << this->name << " KO: 😵😵😵😵😵 Cannot attack!" << std::endl;
	if (this->hitPoints == 0)
		std::cout << this->name << " KO: 😵😵😵😵😵 Cannot attack!" << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints >= amount)
	{
		this->hitPoints -= amount;
		std::cout << RED << this->name << " 💥DAMAGED: -" << amount << " H points!" << RESET;
		std::cout << " (E:" << this->energyPoints << "|H:" << this->hitPoints << ")" << std::endl;
	}
	else
	{
		this->hitPoints = 0;
		std::cout << RED << this->name << " 💥DAMAGED: -" << amount << " H points!" << RESET;
		std::cout << " (E:" << this->energyPoints << "|H:" << this->hitPoints << ")" << std::endl;
		std::cout << this->name << " 💀GAMEOVER 💀💀💀💀💀💀💀💀💀💀" << std::endl;
	}
};

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << GREEN << this->name << " ❤️‍🩹REPAIRED: +" << amount << " H point" << RESET;
		std::cout << " (E:" << this->energyPoints << "|H:" << this->hitPoints << ")" << std::endl;
	}
	if (this->energyPoints == 0)
		std::cout << this->name << " 💀💀💀💀💀 Cannot repair!" << std::endl;
};

void	ClapTrap::setName(std::string name) {
	this->name = name;
};

void	ClapTrap::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
};

void	ClapTrap::setEnergyPoints(int energyPoints) {
	this->energyPoints = energyPoints;
};

void	ClapTrap::setAttackDamage(int attackDamage) {
	this->attackDamage = attackDamage;
};

std::string		ClapTrap::getName(void) const {
	return (this->name);
};

int		ClapTrap::getHitPoints(void) const {
	return (this->hitPoints);
};

int		ClapTrap::getEnergyPoints(void) const {
	return (this->energyPoints);
};

int		ClapTrap::getAttackDamage(void) const {
	return (this->attackDamage);
};
