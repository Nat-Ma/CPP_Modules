/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:37:13 by nrauh             #+#    #+#             */
/*   Updated: 2025/08/01 13:39:26 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Curtis("Curti");
	ClapTrap	Klara("Klara");
	ScavTrap	Scavyyy("Scavy");

	std::cout << std::endl;
	Curtis.attack("Klara");
	Klara.takeDamage(2);
	Klara.beRepaired(1);
	std::cout << std::endl;
	
	Klara.attack("Curti");
	Curtis.takeDamage(2);
	std::cout << std::endl;
	
	Scavyyy.attack("Klara");
	Klara.takeDamage(20);
	std::cout << std::endl;
	
	Curtis.attack("Scavy");
	Scavyyy.takeDamage(2);
	Curtis.attack("Scavy");
	Scavyyy.takeDamage(2);

	Scavyyy.guardGate();
	
	return (0);
}
