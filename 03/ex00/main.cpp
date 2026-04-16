/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:37:13 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:29:55 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Curtis("🐶");
	ClapTrap	Klara("🦂");
	std::cout << std::endl;

	Curtis.attack("🦂");
	Klara.takeDamage(4);
	Klara.beRepaired(1);
	Klara.attack("🐶");
	Curtis.takeDamage(4);
	Klara.attack("🐶");
	Curtis.takeDamage(4);
	Curtis.attack("🦂");
	Klara.takeDamage(4);
	Curtis.takeDamage(4);
	Klara.attack("🐶");
	Klara.attack("🐶");

	return (0);
}
