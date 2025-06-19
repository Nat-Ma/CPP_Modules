/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 08:23:33 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/24 18:10:16 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << "Created " << _name << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << _name << " was destroyed!" << std::endl;
}

void	Zombie::announce(void) {
	std::cout <<
	_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
