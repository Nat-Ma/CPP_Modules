/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 10:05:06 by natalierauh       #+#    #+#             */
/*   Updated: 2025/06/14 12:20:10 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv) {
	std::string		argStr = argv[2];
	std::string 	buffer;
	size_t			pos;

	if (argc != 4)
		return (1);
	const std::string &s1 = argStr;
	std::ifstream MyReadFile(argv[1]);
	if (MyReadFile.fail()) {
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::ofstream MyFile("newfile.txt");
	while (getline (MyReadFile, buffer)) {
		pos = buffer.find(s1);
		if (pos == std::string::npos)
			MyFile << buffer;
		else {
			MyFile << buffer.substr(0, pos);
			MyFile << argv[3];
			MyFile << buffer.substr(pos + s1.size(), buffer.size());
		}
		MyFile << "\n";
	}
	MyFile.close();
	MyReadFile.close();
}
