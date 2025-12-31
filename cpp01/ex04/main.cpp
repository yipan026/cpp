/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:57:26 by yipan             #+#    #+#             */
/*   Updated: 2025/12/31 12:57:10 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

//std::cerr for error output
static int	is_error(const std::string& msg)
{
	std::cerr << "Error: " << msg << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (is_error("Wrong arguments"));
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	if (s1.empty())
		return (is_error("S1 is empty"));

	std::ifstream	infile(filename.c_str());//read file
	if (!infile.is_open())
		return (is_error("infile open failed"));
	std::ofstream	outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
		return (is_error("outfile open failed"));

	std::string	line;
	while (std::getline(infile, line))
	{
		size_t	pos = 0;
		
		pos = line.find(s1, pos);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
			pos = line.find(s1, pos);
		}
		outfile << line << "\n";//for performance
	}
	infile.close();
	outfile.close();
	return (0);
}
