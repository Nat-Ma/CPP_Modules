/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:05:25 by nrauh             #+#    #+#             */
/*   Updated: 2025/06/19 17:30:50 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
	complainMap["DEBUG"] = &Harl::debug;
	complainMap["INFO"] = &Harl::info;
	complainMap["WARNING"] = &Harl::warning;
	complainMap["ERROR"] = &Harl::error;
};

Harl::~Harl() {};

void	debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void	info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void	warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
};

void	error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void	complain(std::string level) {
	auto it = complainMap.find(level);
	if (it != complainMap.end()) {
		(this->*it->second)();
	} else {
		std::cout << "Function was not found: " << level << std::endl;
	}
};
