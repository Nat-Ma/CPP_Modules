/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:59:42 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/30 15:37:22 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie created!" << std::endl;
}

Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << "Created " << _name << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << _name << " was destroyed!" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	_name = name;
}
