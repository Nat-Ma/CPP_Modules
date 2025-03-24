/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:44:43 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/24 10:14:58 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Contact {
	public:
		Contact(string first = "", string last = "",string nick = "", string p_nr = "", string secret = "")
		{
			firstname = first;
			lastname = last;
			nickname = nick;
			phone_nr = p_nr;
			darkest_secret = secret;
		}
		~Contact() {};
		string getFirstname(void) {
			return firstname;
		}
		string getLastname(void) {
			return lastname;
		}
		string getNickname(void) {
			return nickname;
		}
		string getPhoneNumber(void) {
			return phone_nr;
		}
		string getSecret(void) {
			return darkest_secret;
		}

	private:
		string firstname;
		string lastname;
		string nickname;
		string phone_nr;
		string darkest_secret;
};
