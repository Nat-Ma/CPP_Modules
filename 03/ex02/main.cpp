/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:37:13 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 16:26:55 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	Curtis("🐶");
	ClapTrap	Klara("🦂");
	FragTrap	Frag("🐊");

	std::cout << std::endl;
	Curtis.attack("🦂");
	Klara.takeDamage(2);
	Klara.beRepaired(1);
	std::cout << std::endl;
	
	Klara.attack("🐶");
	Curtis.takeDamage(2);
	std::cout << std::endl;
	
	Frag.attack("🦂");
	Klara.takeDamage(Frag.get_attackDamage());
	std::cout << std::endl;
	
	Curtis.attack("🐊");
	Frag.takeDamage(2);

	Frag.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
