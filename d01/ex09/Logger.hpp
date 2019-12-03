/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:05:34 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 17:37:38 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER
#define LOGGER
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
class Logger
{
	std::string filename;
	void logToConsole(std::string str);
	void logToFile(std::string str);
	std::string makeLogEntry(std::string str);
	public:
	Logger(std::string str);
	void log(std::string const & dest, std::string const & message);
};

#endif
