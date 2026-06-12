/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:10:47 by natalierauh       #+#    #+#             */
/*   Updated: 2026/06/12 10:36:56 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

class BitcoinExchange {
	private:
		std::map<std::string, double> data;
		bool isValidDate(const std::string& date) const;
		bool isValidValue(const std::string& value, double& n) const;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		void loadDatabase(const std::string& filename);
		void processInput(const std::string& filename);
};
