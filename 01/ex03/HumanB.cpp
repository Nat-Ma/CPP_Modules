/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:33:21 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/31 10:11:09 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(nullptr) {};

HumanB::HumanB(std::string name, Weapon &weapon)
    : name(name), weapon(&weapon) {
	std::cout << "----- Human B was created -----" << std::endl;
};

HumanB::~HumanB() {
	std::cout << "----- Human B was destroyed -----" << std::endl;
};

void	HumanB::setWeapon(Weapon weapon) {
	this->weapon = &weapon;
};

void	HumanB::attack(void) const {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
};
