/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:33:21 by natalierauh       #+#    #+#             */
/*   Updated: 2025/06/20 16:55:07 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(0) {};

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
