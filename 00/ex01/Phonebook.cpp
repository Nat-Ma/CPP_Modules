/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:16:40 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/24 11:12:36 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

using namespace std;
// Class PhoneBook -> Instances
// Array of contacts
// 8 Contacts, 9th overwrites oldest (first)
// NO DYNAMIC ALLOC
// Class Contact -> Instances
// anything inside a class is private
// anything outside is public
// on program start PB is empty
// -> user prompted to enter ONE of THREE cmds
// ADD, SEARCH, EXIT
// ADD: Prompt to input info of new contact, 1 field at a time
// -> All fields completed, add to PB
// Fields: First name, last name, nickname, phone nr, darkest secret
// Cannot have empty fields...
// SEARCH: display specific contact
// display as 4 cols, index, first name, last name, nickname
// each col 10 chars wide separated by | text right aligned
// if text longer than column last char with a dot
// EXIT: quit, contact lost forever!

void	add_contact(PhoneBook& pb)
{
	string 	first;
	string 	last;
	string 	nick;
	string 	p_nr;
	string 	secret;
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
	string	input;
	int		contact_size;

	PhoneBook pb;
	std::cout << BOLD << YELLOW << "What do you want to do?" << RESET << std::endl;
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
				pb.getContact(atoi(input.c_str()));
			}
		}
		else
			std::cout << RED << "Please enter a valdid prompt" << RESET << std::endl;
		std::cout << BOLD << YELLOW << "What do you want to do?" << RESET << std::endl;
		std::cin >> input;
	}
	return (1);
}
