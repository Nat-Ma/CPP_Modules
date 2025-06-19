/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:59:29 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/30 15:05:01 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Test
// call announce() for each of the zombies
// delete and deallocate all zombies and check for memory leaks

#include <string>
#include "Zombie.hpp"
#include "zombieHorde.hpp"

int main(void)
{
	int		i;
	int		n;
	Zombie* horde;

	i = 0;
	n = 7;
	horde = zombieHorde(n, "Curtis");
	while (i < n)
		horde[i++].announce();
	delete[] horde;
	return (1);
}
