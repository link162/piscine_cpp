/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:17:44 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 16:38:57 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char **argv)
{
	if (4 == argc)
	{
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ifstream file(argv[1]);
		if (!file.is_open())
		{
			std::cout << "Could not open file" << std::endl;
			return 0;
		}
		std::string s;
		getline (file, s, (char) file.eof());
		size_t index = 0;
		while (true)
		{
			index = s.find(argv[2], index);
   		 	if (index == std::string::npos) break;
   		 	s.replace(index, s1.length(), argv[3]);
			index += s2.length();
		}
		std::ofstream file2((std::string)argv[1] + (std::string)".replace");
		if (!file2.is_open())
		{
			std::cout << "Could not create file" << std::endl;
			return 0;
		}
		file2 << s;
	}
	else
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
	}
}
