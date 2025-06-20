/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:53:18 by natalierauh       #+#    #+#             */
/*   Updated: 2025/06/20 16:58:51 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

// const means the fn cannot modify the values
// has to return a const ref so that the caller cannot modify the value
class	Weapon {
	public:
		const std::string&	getType(void) const;
		void				setType(std::string type);

		Weapon(std::string type);
		~Weapon();
	private:
		std::string	type;
};
