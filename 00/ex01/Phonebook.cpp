/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:16:40 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/27 14:47:39 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

PhoneBook::PhoneBook() {
	_count = 0;
	_max = 0;
};

PhoneBook::~PhoneBook() {};

void	printStr(std::string str)
{
	if (str.size() > 9)
	{
		str = str.substr(0, 9);
		std::cout << str << ".|";
	}
	else
		std::cout << std::setw(10) << str << "|";
}

void	PhoneBook::setContact(Contact newContact)
{
	if (_count == 8)
	{
		_count = 0;
		_max = 8;
	}
	contacts[_count] = newContact;
	_count++;
};

int	PhoneBook::getContactList(void)
{
	_index = 0;
	if (_count == 0)
	{
		std::cout << RED << "Sorry, you need to add a contact first." << RESET << std::endl;
		return 0;
	}
	std::cout << BOLD << BLUE << std::setw(11) << "_index|" << RESET;
	std::cout << BOLD << BLUE << std::setw(11) << "_firstname|" << RESET;
	std::cout << BOLD << BLUE << std::setw(11) << "_lastname|" << RESET;
	std::cout << BOLD << BLUE << std::setw(11) << "_nickname|" << RESET << std::endl;
	while (_index < _max || _index < _count)
	{
		std::cout << std::setw(10) << _index << "|";
		printStr(contacts[_index].getFirstname());
		printStr(contacts[_index].getLastname());
		printStr(contacts[_index].getNickname());
		std::cout << std::endl;
		_index++;
	}
	return _index;
};

void	PhoneBook::getContact(int targetIndex)
{
	if (targetIndex < 0 || targetIndex >= _count)
	{
		std::cout << RED << "Sorry, a contact with this index does not exist." << RESET << std::endl;
		return ;
	}
	std::cout << GREEN << contacts[targetIndex].getFirstname() << RESET << std::endl;
	std::cout << GREEN << contacts[targetIndex].getLastname() << RESET << std::endl;
	std::cout << GREEN << contacts[targetIndex].getNickname() << RESET << std::endl;
	std::cout << GREEN << contacts[targetIndex].getPhoneNumber() << RESET << std::endl;
	std::cout << GREEN << contacts[targetIndex].getSecret() << RESET << std::endl;
}
