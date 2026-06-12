/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:35:22 by natalierauh       #+#    #+#             */
/*   Updated: 2026/05/10 18:37:15 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};
BitcoinExchange::~BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) { *this = other; }

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        data = other.data;
    }
    return *this;
}

bool BitcoinExchange::isValidDate(const std::string& date) const {
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') return false;

    std::stringstream ss_y(date.substr(0, 4));
    std::stringstream ss_m(date.substr(5, 2));
    std::stringstream ss_d(date.substr(8, 2));
    int y, m, d;

    if (!(ss_y >> y) || !(ss_m >> m) || !(ss_d >> d)) return false;
    if (y < 2008 || m < 1 || m > 12 || d < 1 || d > 31) return false;
    if (m == 4 || m == 6 || m == 9 || m == 11) if (d > 30) return false;
    if (m == 2) {
        bool leap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
        if (d > (leap ? 29 : 28)) return false;
    }
    return true;
}

void BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open database." << std::endl;
        return;
    }
    std::string line, date, valStr;
    std::getline(file, line);
    while (std::getline(file, line)) {
        size_t delim = line.find(',');
        if (delim != std::string::npos) {
            date = line.substr(0, delim);
            valStr = line.substr(delim + 1);
            std::stringstream ss(valStr);
            float rate;
            ss >> rate;
            data[date] = rate;
        }
    }
    file.close();
}

void BitcoinExchange::processInput(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line); // Skip header "date | value"
    while (std::getline(file, line)) {
        if (line.empty()) continue;
        size_t delim = line.find('|');
        if (delim == std::string::npos) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = line.substr(0, delim - 1);
        // Trim spaces
        date.erase(date.find_last_not_of(" \n\r\t") + 1);
        std::string valStr = line.substr(delim + 1);

        if (!isValidDate(date)) {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }

        std::stringstream ss(valStr);
        float val;
        if (!(ss >> val)) {
            std::cout << "Error: bad input => " << valStr << std::endl;
        } else if (val < 0) {
            std::cout << "Error: not a positive number." << std::endl;
        } else if (val > 1000) {
            std::cout << "Error: too large a number." << std::endl;
        } else {
            // Find closest date (lower or equal)
            std::map<std::string, float>::iterator it = data.upper_bound(date);
            if (it != data.begin()) {
                --it;
                std::cout << date << " => " << val << " = " << (val * it->second) << std::endl;
            } else {
                std::cout << "Error: no preceding date found for " << date << std::endl;
            }
        }
    }
}
