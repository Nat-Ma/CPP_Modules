/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:09:17 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/24 17:03:56 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie {
	public:
		void	announce(void);
		//void	randomChump(std::string _name);
		//Zombie*	newZombie(std::string _name);

		Zombie(std::string _name);
		~Zombie();

	private:
		std::string	_name;
};
