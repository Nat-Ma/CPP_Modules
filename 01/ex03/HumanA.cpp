/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:01:37 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/31 10:10:27 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name), weapon(weapon) {
	std::cout << "----- Human A created -----" << std::endl;
};

HumanA::~HumanA() {
	std::cout << "----- Human A was destroyed -----" << std::endl;
}

void	HumanA::attack(void) const {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
};
