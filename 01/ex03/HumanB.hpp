/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:15:42 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/31 10:06:50 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB {
	protected:
		std::string	name;
		Weapon*		weapon;

	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void	setWeapon(Weapon weapon);
		void	attack(void) const;
};
