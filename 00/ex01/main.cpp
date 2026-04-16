/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:16:40 by natalierauh       #+#    #+#             */
/*   Updated: 2025/06/20 16:28:37 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include "Contact.hpp"
#include "Phonebook.hpp"

using namespace std;

void	add_contact(PhoneBook& pb)
{
	std::string 	first;
	std::string 	last;
	std::string 	nick;
	std::string 	p_nr;
	std::string 	secret;
	int		x;

	x = 0;
	while (x < 5)
	{
		if (x == 0)
		{
			std::cout << BLUE << BOLD << "Type your first name: " << RESET << std::endl;
			std::cin >> first;
		}
		else if (x == 1)
		{
			std::cout << BLUE << BOLD << "Type your last name: " << RESET << std::endl;
			std::cin >> last;
		}
		else if (x == 2)
		{
			std::cout << BLUE << BOLD << "Type your nick name: " << RESET << std::endl;
			std::cin >> nick;
		}
		else if (x == 3)
		{
			std::cout << BLUE << BOLD << "Type your phone number: " << RESET << std::endl;
			std::cin >> p_nr;
		}
		else if (x == 4)
		{
			std::cout << BLUE << BOLD << "Type your darkest secret: " << RESET << std::endl;
			std::cin >> secret;
		}
		x++;
	}
	Contact new_contact(first, last, nick, p_nr, secret);
	pb.setContact(new_contact);
}

int	main(void)
{
	std::string	input;
	int			contact_size;

	PhoneBook pb;
	std::cout << BOLD << YELLOW << "What do you want to do?" << RESET << std::endl;
	std::cout << "[OPTIONS: ADD, SEARCH, EXIT]" << std::endl;
	std::cin >> input;
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
			add_contact(pb);
		else if (input.compare("SEARCH") == 0)
		{
			contact_size = pb.getContactList();
			if (contact_size)
			{
				std::cout << YELLOW << BOLD << "Choose a contact" << RESET << std::endl;
				std::cin >> input;
				if (input.size() > 1 || !isdigit(input[0]))
					std::cout << RED << "Sorry, please enter a number." << RESET << std::endl;
				else
					pb.getContact(atoi(input.c_str()));
			}
		}
		else
			std::cout << RED << "Please enter a valdid prompt" << RESET << std::endl;
		std::cout << BOLD << YELLOW << "What do you want to do?" << RESET << std::endl;
		std::cout << "[OPTIONS: ADD, SEARCH, EXIT]" << std::endl;
		std::cin >> input;
	}
	return (1);
}
