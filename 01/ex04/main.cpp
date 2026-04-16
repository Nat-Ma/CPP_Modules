/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 10:05:06 by natalierauh       #+#    #+#             */
/*   Updated: 2025/06/19 14:59:01 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv) {
	std::string		argStr = argv[2];
	std::string		buffer;
	size_t			pos;

	if (argc != 4)
		return (1);
	const std::string &s1 = argStr;
	std::ifstream ReadFile(argv[1]);
	if (ReadFile.fail()) {
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::ofstream WriteFile("newfile.txt");
	while (getline (ReadFile, buffer)) {
		pos = buffer.find(s1);
		if (pos == std::string::npos)
			WriteFile << buffer;
		else {
			WriteFile << buffer.substr(0, pos);
			WriteFile << argv[3];
			WriteFile << buffer.substr(pos + s1.size(), buffer.size());
		}
		WriteFile << "\n";
	}
	WriteFile.close();
	ReadFile.close();
}
