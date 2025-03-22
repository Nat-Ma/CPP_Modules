/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:40:14 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/22 16:06:14 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

using namespace std;

class PhoneBook {
	private:
		Contact	contacts[8];
		int		i;

	public:
		PhoneBook() {
			i = 0;
			while (i < 8)
			{
				contacts[i] = Contact("", "", "", "", "");
				i++;
			}
			i = 0;
		}
		~PhoneBook();
		void	setContact(Contact newContact)
		{
			if (i < 8)
			{
				contacts[i] = newContact;
				i++;
			}
			else
				i = 0;
		};
		// void	getContact()
		// {
		// 	// display as 4 cols, index, first name, last name, nickname
		// 	// each col 10 chars wide separated by | text right aligned
		// 	// if text longer than column last char with a dot
		// };
};
