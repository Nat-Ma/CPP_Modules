/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:40:14 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/24 11:12:17 by natalierauh      ###   ########.fr       */
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

using namespace std;

void	print_str(string str)
{
	if (str.size() > 9)
	{
		str = str.substr(0, 9);
		std::cout << str << ".|";
	}
	else
		std::cout << setw(10) << str << "|";
}

class PhoneBook {
	private:
		Contact	contacts[8];
		int		count;
		int		index;
		int		max;

	public:
		PhoneBook() : count(0), max(0) {}
		~PhoneBook() {};
		void	setContact(Contact newContact)
		{
			if (count == 8)
			{
				count = 0;
				max = 8;
			}
			contacts[count] = newContact;
			count++;
		};
		int	getContactList()
		{
			index = 0;
			if (count == 0)
			{
				std::cout << RED << "Sorry, you need to add a contact first." << RESET << std::endl;
				return 0;
			}
			std::cout << BOLD << BLUE << setw(11) << "Index|" << RESET;
			std::cout << BOLD << BLUE << setw(11) << "Firstname|" << RESET;
			std::cout << BOLD << BLUE << setw(11) << "Lastname|" << RESET;
			std::cout << BOLD << BLUE << setw(11) << "Nickname|" << RESET << std::endl;
			while (index < max || index < count)
			{
				std::cout << std::setw(10) << index << "|";
				print_str(contacts[index].getFirstname());
				print_str(contacts[index].getLastname());
				print_str(contacts[index].getNickname());
				std::cout << std::endl;
				index++;
			}
			return index;
		};
		void	getContact(int target_index)
		{
			index = 0;

			while (index < max || index < count)
			{
				if (index == target_index)
				{
					std::cout << GREEN << contacts[index].getFirstname() << RESET << std::endl;
					std::cout << GREEN << contacts[index].getLastname() << RESET << std::endl;
					std::cout << GREEN << contacts[index].getNickname() << RESET << std::endl;
					std::cout << GREEN << contacts[index].getPhoneNumber() << RESET << std::endl;
					std::cout << GREEN << contacts[index].getSecret() << RESET << std::endl;
				}
				else
					std::cout << RED << "Sorry, a contact with this index does not exist." << RESET << std::endl;
				index++;
			}
		}
};
