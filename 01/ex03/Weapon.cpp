/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:53:16 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/31 10:11:23 by natalierauh      ###   ########.fr       */
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

std::string	Weapon::getType() const {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
