/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:01:01 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/31 10:06:29 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA {
	protected:
		std::string	name;
		Weapon&		weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void) const;
};
