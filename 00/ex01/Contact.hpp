/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:44:43 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/22 16:43:03 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

using namespace std;

class Contact {
	public:
		Contact(string first, string last, string nick, string p_nr, string secret)
		{
			firstname = first;
			lastname = last;
			nickname = nick;
			phone_nr = p_nr;
			darkest_secret = secret;
		}
		~Contact() {};
		void getFirstname(void) {
			std::cout << firstname << std::endl;
		}

	private:
		string firstname;
		string lastname;
		string nickname;
		string phone_nr;
		string darkest_secret;
};
