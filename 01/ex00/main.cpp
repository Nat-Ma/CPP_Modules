/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:29:04 by natalierauh       #+#    #+#             */
/*   Updated: 2025/05/30 15:49:56 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "NewZombie.hpp"
#include "RandomChump.hpp"

int	main(void)
{
	Zombie		Curtis("Curtis");
	Zombie		*Klara;

	Curtis.announce();
	Klara = newZombie("Klara");
	Klara->announce();
	randomChump("Random");
	delete Klara;
	return (1);
}
