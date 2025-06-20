/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:53:16 by natalierauh       #+#    #+#             */
/*   Updated: 2025/06/20 17:00:23 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
	std::cout << "----- Weapon created.. -----" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "----- Weapon destroyed.. -----" << std::endl;
}

const std::string&	Weapon::getType() const {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
