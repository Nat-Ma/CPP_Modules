/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:40:14 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/27 14:45:51 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define RESET   "\033[0m"
#define BOLD	"\033[1m"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		_count;
		int		_index;
		int		_max;

	public:
		PhoneBook();
		~PhoneBook();
		void	setContact(Contact newContact);
		int	getContactList(void);
		void	getContact(int targetIndex);
};
