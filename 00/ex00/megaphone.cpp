/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:29:42 by natalierauh       #+#    #+#             */
/*   Updated: 2025/02/20 18:42:01 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	if (argc < 1)
		return (1);
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	j = 1;
	while (j < argc)
	{
		i = 0;
		str = argv[j];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i++;
		}
		std::cout << str;
		j++;
	}
	std::cout << std::endl;
    return (0);
}
