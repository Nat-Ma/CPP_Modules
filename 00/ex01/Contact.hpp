/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:44:43 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/27 14:46:23 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact(std::string first = "", std::string last = "",std::string nick = "", std::string p_nr = "", std::string secret = "");
		~Contact();
		std::string getFirstname(void);
		std::string getLastname(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getSecret(void);

	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phoneNr;
		std::string _darkestSecret;
};
