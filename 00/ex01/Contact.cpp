/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:44:37 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/27 14:46:04 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(std::string first, std::string last,std::string nick, std::string pNr, std::string secret)
{
	_firstname = first;
	_lastname = last;
	_nickname = nick;
	_phoneNr = pNr;
	_darkestSecret = secret;
}

Contact::~Contact() {};

std::string Contact::getFirstname(void) {
	return _firstname;
}

std::string Contact::getLastname(void) {
	return _lastname;
}

std::string Contact::getNickname(void) {
	return _nickname;
}

std::string Contact::getPhoneNumber(void) {
	return _phoneNr;
}

std::string Contact::getSecret(void) {
	return _darkestSecret;
}
