/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:59:49 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/30 15:28:17 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
	int		i;
	Zombie*	horde;

	if (N <= 0)
		return nullptr;
	horde = new Zombie[N];
	i = 0;
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
