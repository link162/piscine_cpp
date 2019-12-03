/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:48:23 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 18:04:30 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>

int main(int argc, char **argv)
{
	std::string s;
	if (1 == argc)
		while(std::cin)
		{
			getline(std::cin, s);
			std::cout << s << std::endl;
    	}
	else
		for(int i = 1; i < argc; i++)
		{
			std::ifstream file(argv[i]);
			if (!file.is_open())
			{
				std::cout << "cat: " << argv[i] << ": No such file or directory" << std::endl;
				continue;
			}
			getline (file, s, (char)file.eof());
			std::cout << s;
		}
}
