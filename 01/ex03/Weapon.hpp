/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:53:18 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/31 09:42:24 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	Weapon {
	public:
		std::string	getType(void) const;
		void		setType(std::string type);

		Weapon(std::string type);
		~Weapon();
	private:
		std::string	type;
};
